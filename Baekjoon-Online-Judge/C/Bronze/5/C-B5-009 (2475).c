#include <stdio.h>

int main(void)
{
    int num1, num2, num3, num4, num5 = 0;
    int num = 0;

    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    num = ((num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4) + (num5 * num5)) % 10;

    printf("%d", num);

    return 0;
}
