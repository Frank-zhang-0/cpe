/*
一年大约有3.156×10?秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
*/
#include <stdio.h>
int main(void)
{
    int age;
    float second;

    

    printf("Please enter your age:");
    scanf("%d",&age);
    getchar();

    second = age * 3.156E7;
    
    printf("The number of seconds for your age is %e(s).\n",second);
    getchar();

    return 0;

}