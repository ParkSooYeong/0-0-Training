#include <stdio.h>

int main(void)
{
    int UR = 0;
    int TR = 0;
    int UO = 0;
    int TO = 0;
    int site_score = 0;

    scanf("%d %d %d %d", &UR, &TR, &UO, &TO);
    
    site_score = 56 * UR + 24 * TR + 14 * UO + 6 * TO;

    printf("%d", site_score);

    return 0;
}
