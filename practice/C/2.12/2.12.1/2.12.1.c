/*
调用一次printf()函数，把你的姓名打印在一行。
再调用一次printf()函数，把你的姓名分别打印在两行。
然后，再调用两次printf()函数，把你的姓名打印在一行。
输出应如样例所示：
    Gustav Mahler
    Gustav
    Mahler
    Gustav Mahler
*/
#include <stdio.h>
int main(void)
{
    printf("张旦强\n");
    printf("张\n旦强\n");
    printf("张");
    printf("旦强\n");
    getchar();
    return 0;
}