/*
��дһ�������������������
For he's a jolly good fellow!
For he's a jolly good fellow!
For he's a jolly good fellow!
Which nobody can deny!
����main()�������⣬�ٵ��������Զ��庯����
һ��������Ϊjolly()�����ڴ�ӡǰ�������ݣ�����һ�δ�ӡһ��;
��һ��������Ϊdeny()�����ڴ�ӡ���һ�����ݡ�
*/
#include <stdio.h>
void jolly(void);
void deny(void);

int main(void)
{
    jolly();
    jolly();
    jolly();
    deny();
    getchar();
    
    return 0;
}
void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
    printf("Which nobody can deny!\n");
}