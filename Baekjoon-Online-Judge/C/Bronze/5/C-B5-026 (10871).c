#include <stdio.h>

int main(void)
{
    int N = 0;
    int X = 0;
    int A[10000];
    int B[10000];
    int i = 0;

    scanf("%d %d", &N, &X);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);

        if(X > A[i])
        {
            B[i] = A[i];
        }
        else
        {
            continue;
        }

        printf("%d ", B[i]);
    }

    return 0;
}
