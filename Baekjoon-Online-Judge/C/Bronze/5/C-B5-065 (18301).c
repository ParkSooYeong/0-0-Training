#include <stdio.h>

int main(void)
{
    int N = 0;
    int n1 = 0;
    int n2 = 0;
    int n12 = 0;

    scanf("%d %d %d", &n1, &n2, &n12);

    N = (n1 + 1) * (n2 + 1) / (n12 + 1) - 1;

    printf("%d", N);

    return 0;
}
