#include <stdio.h>

int main(void)
{
    char input[101];

    while(fgets(input, sizeof(input), stdin) != NULL)
    {
        //fgets(input, sizeof(input), stdin);
        //scanf("%s", input);
        printf("%s", input);
    }

    return 0;
}
