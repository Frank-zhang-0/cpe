/*
 * 修改编程练习5的程序，使其能计算整数的平方和（可以认为第1天赚$1、第2天赚$4、第3天赚$9，以此类推，这看起来很不错）。
 * C没有平方函数，但可以用 n * n 来表示 n 的平方.
 */
#include <stdio.h>
int main(void)
{
    int num, count = 0, sum = 0;

    printf("请输入一个整数：");
    scanf("%d", &num);
    while (count++ < num) {
        sum = sum + count * count;
    }
    printf("平方和 = $%d\n", sum);

    return 0;
}