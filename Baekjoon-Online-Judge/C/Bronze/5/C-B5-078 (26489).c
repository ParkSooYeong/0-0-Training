#include <stdio.h>

int main(void)
{
    char data[21];
    int count = 0;

    while(fgets(data, sizeof(data), stdin) != NULL)
    {
        count++;
    }

    printf("%d", count);

    return 0;
}
