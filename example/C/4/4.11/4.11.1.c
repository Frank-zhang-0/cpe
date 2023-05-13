#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    float A, B, C;
    float a, b, c;

    printf("请输入任意三个数：");
    scanf("%f %f %f", &A, &B, &C);

    if (A>B)
        {
            if (A>C)
                {
                    if (B>C)
                        {
                            a = A;
                            b = B;
                            c = C;
                            printf("\n三个数从大到小顺序依次为：%f %f %f\n", a, b, c);
                        }
                    else
                        {
                            a = A;
                            b = C;
                            c = B;
                            printf("\n三个数从大到小顺序依次为：%f %f %f\n", a, b, c);
                        }
                }
            else
                {
                    a = C;
                    b = A;
                    c = B;
                    printf("\n三个数从大到小顺序依次为：%f %f %f\n", a, b, c);
                }
        }
    else
        {
            if (B>C)
                {
                    if (A>C)
                        {
                            a = B;
                            b = A;
                            c = C;
                            printf("\n三个数从大到小顺序依次为：%f %f %f\n", a, b, c);
                        }
                    else
                        {
                            a = B;
                            b = C;
                            c = A;
                            printf("\n三个数从大到小顺序依次为：%f %f %f\n", a, b, c);
                        }
                }
            else
                {
                    a = C;
                    b = B;
                    c = A;
                    printf("\n三个数从大到小顺序依次为：%f %f %f\n", a, b, c);
                }
        }
    
    system("PAUSE");

    return 0;
}