//input.c--何时用 &
#include <stdio.h>
int main(void)
{
    int age;            //变量
    float assets;       //变量
    char pet[30];       //字符数组，用于存储字符串

    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets);  //这里要用 &
    scanf("%s", pet);               //这里不要用 &
    printf("%d $%.2f %s.\n", age, assets, pet);

    return 0;
}