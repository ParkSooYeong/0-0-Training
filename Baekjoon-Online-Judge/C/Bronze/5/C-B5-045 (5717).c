#include <stdio.h>

int main(void)
{
    int M = 0;
    int F = 0;

    while(1)
    {
        scanf("%d %d", &M, &F);

        if((M == 0) && (F == 0))
        {
            break;
        }
        else
        {
            printf("%d\n", M + F);
        }
    }

    return 0;
}
