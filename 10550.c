#include "stdio.h"

int main()
{
    int a, b, c, d;
    while( scanf("%d %d %d %d", &a, &b, &c, &d), (a+b+c+d!=0) ){
        printf("%d\n", 9*(80 + (a-b>=0?a-b:a-b+40) + 40 + (c-b>=0?c-b:c-b+40) + (c-d>0?c-d:c-d+40) ));
    } 
}
