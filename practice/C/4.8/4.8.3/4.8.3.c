/*
 *编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。
 *用下面的格式进行输出（系统不同，指数记数法显示的位数可能不同）：
 *  a.  The input is 21.3 or 2.1e+001.
 *  b.  The input is +21.290 or 2.129E+001.
*/
#include <stdio.h>
int main()
{
    float num;

    printf("请输入一个浮点数：");
    scanf("%f", &num);
    printf("a.  The input is %f or %e.\n", num, num);
    printf("b.  The input is %f or %E", num, num);

    return 0;
}