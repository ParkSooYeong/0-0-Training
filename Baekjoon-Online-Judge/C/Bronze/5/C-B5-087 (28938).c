#include <stdio.h>

int main(void)
{
    int n = 0;
    int x = 0;
    int sum = 0;
    int i = 0;

    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &x);
        sum += x;
    }

    if(sum > 0)
    {
        printf("Right");
    }
    else if(sum < 0)
    {
        printf("Left");
    }
    else if(sum == 0)
    {
        printf("Stay");
    }

    return 0;
}
