/*
一个水分子的质量约为3.0×10^﹣23克。1夸脱水大约是950克。
编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
*/
#include <stdio.h>
int main(void)
{
    float quart,water;

    printf("Please enter the quart of water:");
    scanf("%f",&quart);
    getchar();

    water = quart * 950 / 3.0E-23;

    printf("The number of water molecules is %e.\n",water);
    getchar();

    return 0;

}