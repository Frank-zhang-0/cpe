/*
 * 编写一个程序，提示用户输入天数，然后将其转换成周数和天数。
 * 例如，用户输入 18 ， 则转换成 2 周 4 天。 以下面的格式格式显示结果：
 *   18 days are 2 weeks, 4 days.
 * 通过 while 循环让用户重复输入天数，当用户输入一个非正值时（如 0 或 -20 ），循环结束
 */
#include <stdio.h>
int main(void) {
    int num;    //用户输入天数
    int week;   //周数
    int day;    //天数

    printf("请输入天数：\n");
    scanf("%d", &num);
    while(num > 0)
    {
        week = num / 7;
        day = num - week * 7;
        printf("%d days are %d weeks, %d days.\n", num, week, day);
        scanf("%d", &num);
    }

    return 0;
}