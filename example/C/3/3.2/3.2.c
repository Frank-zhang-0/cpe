/*printl.c -- 演示printf()的一些特性*/
#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;

    printf("Doing it right: ");
    getchar();
    printf("%d minus %d is %d\n",ten,2,ten-two);
    getchar();
    printf("Doing it woring: ");
    getchar();
    printf("%d minus %d is %d\n",ten);
    getchar();

    return 0;
}