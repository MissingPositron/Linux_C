#include <stdio.h>
#include <stdlib.h>

int main(void){
    void *p;
    int *q;
    p = malloc(sizeof(int));
    if(p == NULL){
        perror("fail to malloc");
        exit(1);
    }
    q = (int *)p;
    *q = 100;
    printf("the value is : %d\n", *q);
    return 0;
}
