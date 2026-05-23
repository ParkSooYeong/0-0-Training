#include <stdio.h>
#include <string.h>

int main(void)
{
    char input[1001];
    char output[1001];

    scanf("%s", input);
    scanf("%s", output);

    if(strlen(input) >= strlen(output))
    {
        printf("go");
    }
    else
    {
        printf("no");
    }

    return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[1001];
    char str2[1001];
    int i = 0;
    int count1 = 0;
    int count2 = 0;

    scanf("%s", str1);
    scanf("%s", str2);

    for(i = 0; i < 1001; i++)
    {
        if(str1[i] == 'a')
        {
            count1++;
        }
        if(str2[i] == 'a')
        {
            count2++;
        }
    }

    printf("%d\n", count1);
    printf("%d\n", count2);

    if(count1 < count2)
    {
        printf("no");
    }
    else
    {
        printf("go");
    }

    return 0;
}
*/
