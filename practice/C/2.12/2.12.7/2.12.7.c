/*
 *编写一个程序，生成以下格式的输出：
 *Smile!Smile!Smile!
 *Smile!Smile!
 *Smile!
 *该程序要定义一个函数，该函数被调用一次打印一次“Smile!”，根据程序的需要使用该函数。
*/
#include <stdio.h>
void sm(void);

int main(void)
{
    sm(); sm(); sm();
    printf("\n");
    sm(); sm();
    printf("\n");
    sm();
    printf("\n");

    getchar();

    return 0;
}
void sm(void)
{
    printf("Smile!");
}