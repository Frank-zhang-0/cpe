/*4.10.1--学以致用*/
#include <stdio.h>
int main(void)
{
    char name[40];
    float cash;

    printf("Please enter your name and cash：");
    scanf("%s %f",name,&cash);
    printf("\nThe %s family  just may be $%.2f dollars richer!\n",name,cash);

    return 0;
}