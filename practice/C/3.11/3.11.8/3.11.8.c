/*
���������������ϵͳ�У�1Ʒ�ѵ���2����1������8��˾��1��˾����2�����ף�1�����׵���3���ס�
��дһ��������ʾ�û����뱭��������Ʒ�ѣ���˾�����ף�����Ϊ��λ��ʾ�ȼ�������
*/
#include <stdio.h>
int main(void)
{
    float cup;

    printf("Please enter the number of cups:");
    scanf("%f",&cup);
    getchar();
    printf("%fcup = %fpint\n",cup,cup / 2);
    printf("%fcup = %founce\n",cup,cup * 8);
    printf("%fcup = %ftablespoons\n",cup,cup * 8 * 2);
    printf("%fcup = %fteaspoons\n",cup,cup * 8 * 2 * 3);
    getchar();

    return 0;
    
}