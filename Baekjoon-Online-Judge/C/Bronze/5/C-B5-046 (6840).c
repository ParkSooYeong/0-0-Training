#include <stdio.h>

int main(void)
{
    int A = 0;
    int B = 0;
    int C = 0;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    if((B >= A) && (C <= A) || (B <= A) && (C >= A))
    {
        printf("%d", A);
    }
    else if((A >= B) && (C <= B) || (A <= B) && (C >= B))
    {
        printf("%d", B);
    }
    else
    {
        printf("%d", C);
    }

    return 0;
}
