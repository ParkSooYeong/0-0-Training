#include <stdio.h>

int main(void)
{
    int num = 0;

    scanf("%d", &num);

    if(num / 10 == (num % 10) / 1)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

    return 0;
}
