/*
��дһ������Ҫ����ʾ����һ��ASCII��ֵ���磬66����Ȼ���ӡ������ַ���
*/
#include <stdio.h>
int main(void)
{
    char code;

    printf("Please enter a ASCII code.\n");
    scanf("%d",&code);
    getchar();
    printf("The character for %d is %c.\n",code,code);
    getchar();

    return 0;

}