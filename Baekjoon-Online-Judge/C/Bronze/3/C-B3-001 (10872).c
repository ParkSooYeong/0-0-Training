#include <stdio.h>

int main(void)
{
    int N = 0;
    int i = 0;
    int factorial = 1;

    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        factorial *= i;
    }

    printf("%d", factorial);

    return 0;
}
