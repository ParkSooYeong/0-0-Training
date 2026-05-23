#include <stdio.h>

int main(void)
{
    int N = 0;
    int i = 0;
    int j = 0;

    scanf("%d", &N);

    for(i = 1; i < N + 1; i++)
    {
        for(j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
