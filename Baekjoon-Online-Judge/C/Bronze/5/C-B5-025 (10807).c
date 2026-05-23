#include <stdio.h>

int main(void)
{
    int N = 0;
    int num[100];
    int i = 0;
    int v = 0;
    int count = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d", &num[i]);
    }

    scanf("%d", &v);

    for(i = 0; i < N; i++)
    {
        if(v == num[i])
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
