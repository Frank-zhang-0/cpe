/*
һӢ���൱��2.54���ס���дһ��������ʾ�û�������ߣ�/Ӣ�磩��Ȼ��������Ϊ��λ��ʾ���
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