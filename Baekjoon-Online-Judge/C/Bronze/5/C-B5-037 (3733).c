#include <stdio.h>

int main(void)
{
    int N = 0;
    int S = 0;

    while(scanf("%d %d", &N, &S) != EOF)
    {
        printf("%d\n", S / (N + 1));
    }

    return 0;
}
