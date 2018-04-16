#include <stdio.h>

int add(int a, int b){
    return a + b;
}

int mul(int a, int b){
    return a * b;
}

int main(void) {
    /*定义一个函数指针的数组
     * 这个数组名为op， 数组共有两个元素，每个元素是一个函数指针
     * 这个函数指针指向一个有一个整形返回值，并有两个整型参数的函数
     */

    int (*op[2])(int a, int b);
    op[0] = &add;
    op[1] = &mul;
    printf("%d %d \n", op[0](1,2), op[1](1,2));
    return 0;
}
