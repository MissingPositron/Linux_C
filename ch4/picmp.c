#include <stdio.h>
int main(void){
    int *p;
    if(p == 100)
        printf("equal\n");
    else 
        printf("not equal\n");
    if(p == (int *)1000)
        printf("equal\n");
    else 
        printf("not equal\n");
    return 0;
}
