/*
һ��ˮ���ӵ�����ԼΪ3.0��10^��23�ˡ�1����ˮ��Լ��950�ˡ�
��дһ��������ʾ�û�����ˮ�Ŀ�����������ʾˮ���ӵ�������
*/
#include <stdio.h>
int main(void)
{
    float quart,water;

    printf("Please enter the quart of water:");
    scanf("%f",&quart);
    getchar();

    water = quart * 950 / 3.0E-23;

    printf("The number of water molecules is %e.\n",water);
    getchar();

    return 0;

}