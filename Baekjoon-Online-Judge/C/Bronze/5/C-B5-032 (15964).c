#include <stdio.h>

int main(void)
{
    long long int A = 0;
    long long int B = 0;

    scanf("%d %d", &A, &B);
    printf("%lld", (A + B) * (A - B));

    return 0;
}
