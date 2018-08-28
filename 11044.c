#include "stdio.h"
#include "math.h"

int main()
{
    int t, n, m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d", &n, &m);
        printf("%d\n", (int)(ceil((n-2)/3.0)*ceil((m-2)/3.0)));
    }
}
