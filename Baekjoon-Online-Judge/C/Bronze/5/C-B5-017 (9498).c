#include <stdio.h>

int main(void)
{
    int grade = 0;

    scanf("%d", &grade);

    if (90 <= grade <= 100)
    {
        printf("A");
    }
    else if (80 <= grade <= 89)
    {
        printf("B");
    }
    else if (70 <= grade <= 79)
    {
        printf("C");
    }
    else if (60 <= grade <= 69)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }

    return 0;
}
