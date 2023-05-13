/*
在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。
编写一个程序，提示用户输入杯数，并以品脱，盎司，汤勺，茶勺为单位显示等价容量。
*/
#include <stdio.h>
int main(void)
{
    float cup;

    printf("Please enter the number of cups:");
    scanf("%f",&cup);
    getchar();
    printf("%fcup = %fpint\n",cup,cup / 2);
    printf("%fcup = %founce\n",cup,cup * 8);
    printf("%fcup = %ftablespoons\n",cup,cup * 8 * 2);
    printf("%fcup = %fteaspoons\n",cup,cup * 8 * 2 * 3);
    getchar();

    return 0;
    
}