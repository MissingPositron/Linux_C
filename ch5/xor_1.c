#include <stdio.h>
int main(void){
    int flags = 0xfffffff7;
    int mask = 0x08;
    printf("the first 0x%x\n", flags=flags^mask);
    printf("the second 0x%x\n", flags^mask);
    return 0;
}
