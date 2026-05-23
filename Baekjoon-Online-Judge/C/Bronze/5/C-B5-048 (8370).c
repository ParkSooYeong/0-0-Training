#include <stdio.h>

int main(void)
{
    int n1 = 0;
    int k1 = 0;
    int n2 = 0;
    int k2 = 0;

    scanf("%d %d %d %d", &n1, &k1, &n2, &k2);
    printf("%d", n1 * k1 + n2 * k2);

    return 0;
}
