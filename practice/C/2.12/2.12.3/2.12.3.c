/*
    把你的年龄转换成天数，并显示这两个值（不考虑闰年）
*/
#include <stdio.h>
int main(void)
{
    int a, b;
    a = 18;
    b = a * 365;
    printf("年龄：%d（岁）%d（天）\n",a,b);
    getchar();
    return 0;
}