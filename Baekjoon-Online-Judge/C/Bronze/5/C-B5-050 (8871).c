#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int rounds = n + 1;
    int minTasks = rounds * 2;
    int maxTasks = rounds * 3;

    printf("%d %d\n", minTasks, maxTasks);

    return 0;
}
