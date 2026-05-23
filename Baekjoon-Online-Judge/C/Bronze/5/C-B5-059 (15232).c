#include <stdio.h>

int main(void)
{
    int R = 0;
    int C = 0;
    int i = 0;
    int j = 0;

    scanf("%d", &R);
    scanf("%d", &C);

    for(i = 0; i < R; i++)
    {
        for(j = 0; j < C; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
