/*
 *platinum.c -- your weight in platinum
*/
#include <stdio.h>
int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight in platinum?\n");
    getchar();
    printf("Let's check it out.\n");
    printf("Please erter your weight in pounds:\n");

    scanf("%f",&weight);
    value = 1700.0 * weight * 14.5833;
    printf("your weight in platinum is worth $%.2f.\n",value);
    getchar();
    printf("You are easily worth that! If platinum prices drop,\n");
    getchar();
    printf("eat more to maintain your value.\n");
    getchar();

    return 0;
}