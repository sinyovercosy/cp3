#include "stdio.h"

int main()
{
    int K, X, Y, a, b;
    while(scanf("%d", &K), K)
    {
        scanf("%d %d", &X, &Y);
        while(K--)
        {
            scanf("%d %d", &a, &b);
            if( a == X || b == Y )
            {
                printf("divisa\n");
            }
            else
                printf("%c%c\n", b>Y?'N':'S', a>X?'E':'O');
        }
    }
}
