#include <stdio.h>

int main(void)
{
    int n = 0;
    int i = 0;

    scanf("%d", &n);

    for(i = 0; i < (n / 5); i++)
    {
        printf("V");
    }

    for(i = 0; i < (n % 5); i++)
    {
        printf("I");
    }

    return 0;
}
