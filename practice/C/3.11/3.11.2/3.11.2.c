/*
 *编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。
*/
#include <stdio.h>
int main(void)
{
    char code;

    printf("Please enter a ASCII code.\n");
    scanf("%d",&code);
    getchar();
    printf("The character for %d is %c.\n",code,code);
    getchar();

    return 0;

}