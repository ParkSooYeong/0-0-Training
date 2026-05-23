#include <stdio.h>

int main(void)
{
    int student[31] = {0};
    int num = 0;
    int i = 0;

    for(i = 0; i < 28; i++)
    {
        scanf("%d", &num);
        student[num] = 1;
    }

    for(i = 1; i <= 30; i++)
    {
        if(student[i] == 0)
        {
            printf("%d\n", i);
        }
    }

    return 0;

    /*
    int j = 0;

    for(i = 1; i < 31; i++)
    {
        num[i] = i;
    }

    for(i = 0; i < 28; i++)
    {
        scanf("%d", &student[i]);
    }

    for(i = 0; i < 28; i++)
    {
        for(j = 0; j < 30; j++)
        {
            if(num[j] == student[i])
            {
                continue;
            }
            else
            {
            }
        }
    }
    */
}
