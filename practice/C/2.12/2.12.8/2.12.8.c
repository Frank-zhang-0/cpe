/*
��дһ�����򣬵���һ����Ϊone_three()�ĺ�����
�ú�����һ�д�ӡ���ʡ�one�����ٵ��õ�2������two()��Ȼ������һ�д�ӡ���ʡ�three����
two()������һ����ʾ���ʡ�two����
main()�����ڵ���one_three()����ǰҪ��ӡ���starting now:�������ڵ�����Ϻ���ʾ���done!����
��ˣ��ó�������Ӧ������ʾ��
starting now:
one
two
three
done!
*/
#include <stdio.h>
void one_three(void);
void two(void);

/// @brief 
/// @param  
/// @return 
int main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    getchar();

    return 0;
}
void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}
void two(void)
{
    printf("two\n");
}