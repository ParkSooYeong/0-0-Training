#include <stdio.h>

int main(void)
{
    int N = 0;
    int M = 0;
    int i = 0;
    int j = 0;

    scanf("%d %d", &N, &M);

    int A[N][M];
    int B[N][M];
    int sum[N][M];

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < M; j++)
        {
            printf("%d ", sum[i][j]);
        }

        printf("\n");
    }

    return 0;
}
