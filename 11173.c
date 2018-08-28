#include "stdio.h"

int main()
{
    int N, n, k;
    scanf("%d", &N);
    while(N--)
    {
        scanf("%d %d", &n, &k);
        printf("%d\n", k ^ (k >> 1));
    }
}
