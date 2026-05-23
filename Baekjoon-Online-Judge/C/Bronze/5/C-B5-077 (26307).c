#include <stdio.h>

int main(void)
{
    int HH = 0;
    int MM = 0;

    scanf("%d %d", &HH, &MM);
    printf("%d", (HH - 9) * 60 + MM);

    return 0;
}
