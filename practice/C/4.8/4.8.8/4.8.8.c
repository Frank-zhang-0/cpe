/*
 *编写一个程序，提示用户输入旅行的里程和消耗的汽油量。
 *然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。
 *接下来，使用1加仑大约3.785升，1英里大约为1.609千米，
 *把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，显示小数点后面1位数字。
 *注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。
 *使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数。
*/
#include <stdio.h>
#define K1 3.785    // 1加仑3.785升
int main(void)
{
    float mileage;  //里程数
    float gasoline; //消耗的汽油量
    const float K2 = 1.609; //1英里1.609千米

    printf("请输入旅行的里程(英里)和消耗的汽油量(加仑): ");
    scanf("%f %f", &mileage, &gasoline);
    printf("消耗每加仑汽油行驶的英里数: %.1f (英里/加仑)\n", mileage/gasoline);
    printf("每百公里消耗的汽油量: %.1f (升/100公里)\n", (gasoline*K1)/((mileage*K2)/100));

    return 0;
}