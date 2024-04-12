/*
 * 编写一个程序，提示用户输入一个 double 类型的数，并打印该数的立方值。
 * 自己设计一个函数计算并打印立方值。
 * main()函数要把用户输入的值传递给该函数。
*/
#include <stdio.h>
void cube(double num);

int main(void)
{
    double num;

    printf("请输入一个double类型的数：\n");
    scanf("%lf", &num);
    cube(num);

    return 0;
}

void cube(double num)
{
    double cube;

    cube = num * num * num;
    printf("%f 的立方值为: %f\n", num, cube);
}