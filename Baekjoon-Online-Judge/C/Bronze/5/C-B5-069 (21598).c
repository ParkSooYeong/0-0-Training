#include <stdio.h>

int main(void)
{
    int N = 0;

    scanf("%d", &N);

    if(N == 1)
    {
        printf("SciComLove");
    }
    else if(N == 2)
    {
        printf("SciComLove\n");
        printf("SciComLove");
    }

    return 0;
}
