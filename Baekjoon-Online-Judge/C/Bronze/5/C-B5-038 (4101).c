#include <stdio.h>

int main(void)
{
    int A = 0;
    int B = 0;

    while(1)
    {
        scanf("%d %d", &A, &B);

        if((A == 0) && (B == 0))
        {
            break;
        }
        else if(A > B)
        {
            printf("Yes\n");
        }
        else if((A < B) || (A == B))
        {
            printf("No\n");
        }
    }

    return 0;
}
