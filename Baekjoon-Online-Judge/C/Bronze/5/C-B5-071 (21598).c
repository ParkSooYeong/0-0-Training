#include <stdio.h>

int main(void)
{
    int N = 0;
    int array[101];
    int i = 0;
    int num = 1;

    while(1)
    {
        scanf("%d", &N);

        if(N == 0)
        {
            break;
        }

        for(i = 0; i < N; i++)
        {
            scanf("%d", &array[i]);
        }

        printf("Case %d: Sorting... done!\n", num);

        num++;
    }

    return 0;
}
