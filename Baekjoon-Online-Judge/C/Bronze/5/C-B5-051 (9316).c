#include <stdio.h>

int main(void)
{
    int N = 0;
    int i = 0;

    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        printf("Hello World, Judge %d!\n", i + 1);
    }

    return 0;
}
