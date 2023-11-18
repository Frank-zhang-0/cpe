/*
 *编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
 *使用 const 或 #define 包建一个表示 60 的符号常量或 const 变量。
 *通过 while 循环让用户重复输入值，直到用户输入小于或等于 0 的值才停止循环。
*/
#include <stdio.h>
int main(void)
{
    int minute, min;    //*分钟数
    int hour;           //*小时数
    const int a = 60;   //*1小时=60分钟

    printf("请输入分钟数：");
    scanf("%d", &min);
    while(min > 0)
    {
        hour = min / a;
        minute = min - hour * a;
        printf("%d时%d分\n", hour, minute);
        scanf("%d", &min);
    }
    printf("结束\n");

    return 0;
}