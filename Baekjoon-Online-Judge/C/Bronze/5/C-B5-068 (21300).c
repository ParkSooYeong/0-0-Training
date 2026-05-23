#include <stdio.h>

int main(void)
{
    int beer = 0;
    int malt = 0;
    int wine = 0;
    int drink = 0;
    int seltzer = 0;
    int water = 0;
    int refund = 0;

    scanf("%d %d %d %d %d %d", &beer, &malt, &wine, &drink, &seltzer, &water);

    refund = 5 * beer + 5 * malt + 5 * wine + 5 * drink + 5 * seltzer + 5 * water;

    printf("%d", refund);

    return 0;
}
