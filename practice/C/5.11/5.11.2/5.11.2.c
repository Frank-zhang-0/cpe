/*
 *编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大 10 的所有整数
 *（例如，用户输入 5，则打印 5~15 的所有整数，包括 5 和 15 ）。
 *要求打印的各值之间用一个空格、制表符或换行符分开。
 */
#include <stdio.h>
int main(void)
{
    int num, i;

    printf("请输入一个整数: ");
    scanf("%d", &num);
    for (i = 0; i <= 10; i++)
    {
        printf("%d\n", num);
        num++;
    };

    return 0;
}