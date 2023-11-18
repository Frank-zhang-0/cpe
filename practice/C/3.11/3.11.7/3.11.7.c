/*
 *一英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
*/
#include <stdio.h>
int main(void)
{
    float height,cm;

    printf("Please enter your inch height:");
    scanf("%f",&height);
    getchar();

    cm = height * 2.54f;

    printf("Your height %finch for cm is %fcm.\n",height,cm);
    getchar();

    return 0;

}