#include <stdio.h>

int main(void)
{
    int t = 0;
    int x = 0;
    int y = 0;
    int i = 0;

    scanf("%d", &t);

    for(i = 0; i < t; i++)
    {
        scanf("%d %d", &x, &y);
        printf("%d\n", x + y);
    }

    return 0;
}
