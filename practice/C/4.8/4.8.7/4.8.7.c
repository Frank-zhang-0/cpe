/*
 *编写一个程序，将一个double类型的变量设置为 1.0/3.0，一个float类型的变量设置为 1.0/3.0。
 *分别显示两次计算的结果各3次：一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。
 *程序中要包含float.h头文件，并显示 FLT_DIG 和 DBL_DIG 的值。1.0/3.0的值与这些值一致吗？
*/
#include <stdio.h>
#include <float.h>
int main(void)
{
    double num_1 = 1.0/3.0;
    float num_2 = 1.0/3.0;

    printf("FLT_DIG: %d DBL_DIG: %d "
            "1.0/3.0(double): %.6f 1.0/3.0(float): %.6f\n", FLT_DIG, DBL_DIG, num_1, num_2);
    printf("FLT_DIG: %d DBL_DIG: %d "
            "1.0/3.0(double): %.12f 1.0/3.0(float): %.12f\n", FLT_DIG, DBL_DIG, num_1, num_2);
    printf("FLT_DIG: %d DBL_DIG: %d "
            "1.0/3.0(double): %.16f 1.0/3.0(float): %.16f\n", FLT_DIG, DBL_DIG, num_1, num_2);
    
    return 0;
}