/*
 * 编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英尺、英寸为单位显示该值，允许有小数部分。
 * 程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下：
 * Enter a height in centimeters: 182
 * 182.00 cm = 5.97 feet, 71.65 inches
 * Enter a height in centimeters (<=0 to quit): 168.7
 * 168.70 cm = 5.53 feet, 66.42 inches
 * Enter a height in centimeters (<=0 to quit): 0
 * bye
 */
#include <stdio.h>
int main(void)
{
    float height;   //身高

    printf("Enter a height in centimeters: ");
    scanf("%f", &height);
    while(height > 0) {
        printf("%.2f cm = %.2f feet, %.2f inches\n", height, height/30.48, height/2.54);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f", &height);
    }
    printf("bye\n");

    return 0;
}