/*charcode.c--��ʾ�ַ��Ĵ�����*/
#include <stdio.h>
int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    scanf("%c",&ch);    /*�û������ַ�*/
    getchar();
    printf("The code for %c is %d.\n",ch,ch);
    getchar();

    return 0;
}