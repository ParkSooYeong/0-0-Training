#include <stdio.h>

int main(void)
{
    int n = 0;
    int i = 0;
    int num = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &num);
        printf("%d %d\n", num, num);
    }

    return 0;
}
