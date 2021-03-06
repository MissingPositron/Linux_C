#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

int main(void){
    struct stat statbuf;
    int mask = 0x1ff; //linux 文件的权限位在Linux文字状态的第9位
    int status = 0;
    if(stat("test.txt", &statbuf) == -1){
        perror("fail to get stat");
        exit(1);
    }
    status = (statbuf.st_mode & mask);
    printf("the permission is : 0x%x\n", status);
    return 0;
}
