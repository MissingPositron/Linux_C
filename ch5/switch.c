#include <stdio.h>
#define swap(a,b){
    (a) = (a) ^ (b); \
    (b) = (b) ^ (a); \
    (a) = (a) ^ (b); \§
}

int main(void){
    int a, b;
    a = 2;
    b = 3;
    swap(a, b);
    printf("a is :%d, b is %d\n", a, b);
    return 0;
}
