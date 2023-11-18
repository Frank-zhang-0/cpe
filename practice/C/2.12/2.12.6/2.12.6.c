/*
 *创建一个整型变量toes，并将toes设置为10.
 *程序中还要计算toes的两倍和toes的平方。
 *该程序应打印3个值，并分别描述以示区分。
*/
#include <stdio.h>
int main(void)
{
    int toes, a, b;

    toes = 10;
    a = toes * 2;
    b = toes * toes;

    printf("toes = %d\ntoes * 2 = %d\ntoes^2 = %d\n",toes,a,b);
    getchar();
    
    return 0;

}