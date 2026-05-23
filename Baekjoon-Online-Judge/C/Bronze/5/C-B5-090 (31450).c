#include <stdio.h>

int main(void)
{
    int M = 0;
    int K = 0;

    scanf("%d %d", &M, &K);

    if(M % K == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
