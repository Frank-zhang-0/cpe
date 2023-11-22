/*
 *编写一个程序，先提示用户输入名，然后提示用户输入姓。
 *在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。
 *字母数要与相应名和姓的结尾对齐，如下所示：
 *  Melissa Honeybee
 *        7        8
 *接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
 *  Melissa Honeybee
 *  7       8
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char lastname[20];  //姓
    char firstname[20]; //名

    printf("请输入您的名: ");
    scanf("%s", firstname);
    printf("请输入你的姓: ");
    scanf("%s", lastname);
    printf("%s %s\n", firstname, lastname);
    printf("%*zd %*zd\n", strlen(firstname), strlen(firstname), strlen(lastname), strlen(lastname));
    printf("%s %s\n", firstname, lastname);
    printf("%-*zd %-*zd\n", strlen(firstname), strlen(firstname), strlen(lastname), strlen(lastname));

    return 0;
}