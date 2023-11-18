/*
 *编写一个程序，发出一声警报，然后打印下面的文本:
 *Startled by the sudden sound,Sally shouted,
 *"By the Great Pumpkin,what was that!"
*/
#include <stdio.h>
int main(void)
{
    char alarm = '\a';

    printf("%cStartled by the sudden sound,Sally shouted,\n",alarm);
    printf("\" By the Great Pumpkin, what was that !\"\n");
    getchar();

    return 0;

}