#include <stdio.h>

int main(void)
{
    int point[5];
    int sum = 0;
    int i = 0;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &point[i]);

        sum = sum + point[i];
    }

    printf("%d", sum);

    return 0;
}
