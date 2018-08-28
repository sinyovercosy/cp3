#include "stdio.h"

int main()
{
    int t, a, b, op;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &a, &b);
        if(a<b)
            op = '<';
        else if(a>b)
            op = '>';
        else
            op = '=';
        printf("%c\n", op);
    }
}
