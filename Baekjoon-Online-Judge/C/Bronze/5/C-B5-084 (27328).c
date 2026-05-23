#include <stdio.h>

int main(void)
{
    int A = 0;
    int B = 0;

    scanf("%d", &A);
    scanf("%d", &B);

    if(A < B)
    {
        printf("-1");
    }
    else if(A == B)
    {
        printf("0");
    }
    else if(A > B)
    {
        printf("1");
    }

    return 0;
}
