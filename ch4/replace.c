#include <stdio.h>
/* 替换函数将参数p中出现的所有空格替换为 “_"
 * 如果成功替换返回最后一个空格字符出现的地址，失败返回NULL
 */
const char *replace(const char *str){
    const  char *p; //严格使用const关键字修饰变量
    if(str == NULL) //与字符串为空则退出
        return NULL;
    p = str;
    while(*p != '\0'){  //遍历每一个字符，将检查到的空格字符替换为'_'
        if(*p == ' ')
            *p = '_';
        p++;
    }
    return p;
}

int main(void){
    const char *p = "hello world and China\n"; 
    if(replace(p) != NULL)
        printf("the string : %s", p);
    return 0;
}
