#include "stdio.h"

int main()
{
    int t, i, n, c, ans;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
    {
        ans = -1e9;
        scanf("%d", &n);
        while(n--)
        {
            scanf("%d", &c);
            if(c>ans)
                ans = c;
        }
        printf("Case %d: %d\n", i, ans);
    }
}
