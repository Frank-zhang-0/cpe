/*编写一个程序，提示用户输入名和姓，然后以“名，姓”的格式打印出来*/
#include <stdio.h>
int main(void)
{
    char m[40];     //名
    char x[40];     //姓

    printf("请输入您的名：");
    scanf("%s",m);
    printf("请输入您的姓：");
    scanf("%s",x);
    printf("%s，%s\n",x,m);

    return 0;
}