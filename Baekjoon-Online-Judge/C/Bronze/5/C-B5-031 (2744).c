#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[101];
    char change[101];
    int i = 0;

    scanf("%s", word);

    for(i = 0; i < strlen(word); i++)
    {
        if(word[i] >= 'a' && word[i] <= 'z')
        {
            change[i] = word[i] - 32;
        }
        else if(word[i] >= 'A' && word[i] <= 'Z')
        {
            change[i] = word[i] + 32;
        }
    }

    change[i] = '\0';

    printf("%s", change);

    return 0;
}
