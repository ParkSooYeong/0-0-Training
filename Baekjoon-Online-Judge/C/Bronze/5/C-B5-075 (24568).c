#include <stdio.h>

int main(void)
{
    int R = 0;
    int S = 0;
    int cupcake = 0;

    scanf("%d", &R);
    scanf("%d", &S);

    cupcake = (R * 8) + (S * 3);

    if (cupcake >= 28)
    {
        printf("%d", cupcake - 28);
    }
    else
    {
        printf("0");
    }

    return 0;
}
