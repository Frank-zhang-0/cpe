/*编写一个程序，提示用户输入一个整数，然后打印该数到必该数大10的所有整数
（例如，用户输入输入5，则打印5~15的所有整数。包括5和15）。
要求打印的各值之间用一个空格、制表符或换行符隔开。*/
#include <stdio.h>
int main(void)
{
    int number;
    int i = 0;

    printf("请输入一个整数：");
    scanf("%d", &number);
    while(i <= 10)
        {
            printf("%d\n", number);
            number++;
            i++;
        }
    
    return 0;
}