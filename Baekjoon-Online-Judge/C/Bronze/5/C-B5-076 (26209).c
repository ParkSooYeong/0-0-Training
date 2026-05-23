#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int N[9];
    int i = 0;
    bool found = false;

    scanf("%d %d %d %d %d %d %d %d", &N[0], &N[1], &N[2], &N[3], &N[4], &N[5], &N[6], &N[7]);

    for(i = 0; i < 8; i++)
    {
        if(N[i] == 9)
        {
            found = true;
            break;
        }
    }

    if(found)
    {
        printf("F");
    }
    else
    {
        printf("S");
    }

    return 0;
}
