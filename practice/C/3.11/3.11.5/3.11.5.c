/*
һ���Լ��3.156��10?�롣��дһ��������ʾ�û��������䣬Ȼ����ʾ�������Ӧ��������
*/
#include <stdio.h>
int main(void)
{
    int age;
    float second;

    

    printf("Please enter your age:");
    scanf("%d",&age);
    getchar();

    second = age * 3.156E7;
    
    printf("The number of seconds for your age is %e(s).\n",second);
    getchar();

    return 0;

}