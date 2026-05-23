#include <stdio.h>

int main(void)
{
    char str[1000001];
    int i = 0;

    scanf("%s", str);

    while(str[i] != '\0')
    {
        str[i] = str[i] - 32;
        i++;
    }

    printf("%s", str);

    return 0;
}
