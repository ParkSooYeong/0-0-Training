#include <stdio.h>

int main(void)
{
    int t1 = 0;
    int t2 = 0;
    int e1 = 0;
    int e2 = 0;
    int f1 = 0;
    int f2 = 0;
    int Max = 0;
    int Mel = 0;

    scanf("%d %d %d", &t1, &e1, &f1);
    scanf("%d %d %d", &t2, &e2, &f2);

    Max = t1 * 3 + e1 * 20 + f1 * 120;
    Mel = t2 * 3 + e2 * 20 + f2 * 120;

    if(Max > Mel)
    {
        printf("Max");
    }
    else if(Max < Mel)
    {
        printf("Mel");
    }
    else if(Max == Mel)
    {
        printf("Draw");
    }

    return 0;
}
