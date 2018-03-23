#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

/* convert function, if passed return 0, otherwise return -1*/

int convert(void){
    FILE *fp;
    struct stat statbuf; // status buffer
    char *p, *q;
    int n;
    int res = -1; // return value

    if (stat("test.txt", &statbuf) == -1){
        // get file size and status
        perror("fail to get stat");
        return res;
    }
    fp = fopen("test.txt", "rb"); // if failed open the fail, quit without allocate resources
    if (fp == NULL){
        perror("fail to open");
        return res;
    }

    //allocate the memory for file content, if failed, close the last file and goto err1
    p = (char *)malloc(sizeof(char) * (statbuf.st_size + 1));
    if (p == NULL){
        perror("fail to malloc");
        goto err1;
    }

    //read file , if failed, release the allocated memories and goto err2
    n = fread(p, sizeof(char), statbuf.st_size, fp);
    if (n == -1){
        perror("fail to read");
        goto err2;
    }

    *(p + n) = '\0'; // set the end symbol
    q = p;
    while(*q != '\0'){
        //process file, 
        if ('a' <= *q && *q <= 'z')
            *q -= 32;
        printf("%c", *q);
        q++;
    }
    printf("\n");
    res = 0; // everything ok, return 0

err2:
    free(p);
err1:
    fclose(fp);
    return res;
}

int main(void) {
    if(convert() == -1)
        printf("fail to convert\n");
    return 0;
}


