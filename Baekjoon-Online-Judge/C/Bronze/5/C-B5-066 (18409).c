#include <stdio.h>

int main(void)
{
    int N = 0;
    int i = 0;
    int sum = 0;
    char S[51];
    
    scanf("%d", &N);
    scanf("%s", S);

    for(i = 0; i < N; i++)
    {
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            sum += 1;
        }
    }

    printf("%d", sum);

    return 0;
}
