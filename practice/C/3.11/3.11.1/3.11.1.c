/*
��дһ����������۲�ϵͳ��δ����������硢����������͸���������������
*/
#include <stdio.h>
int main(void)
{
    int z;
    int a;
    float f;
    float b;
    float c;

    z = 999999999;
    a = 99;
    f = 3.4E38 * 100.f;
    b = 3.4E38;
    c = 0.1234E-10/10;

    printf("%d,%d\n",a,z);
    printf("%e,%e,%e\n",f,b,c);
    getchar();

    return 0;

}