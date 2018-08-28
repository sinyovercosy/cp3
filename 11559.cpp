#include "stdio.h"

int main()
{
    int n, b, h, w, p, a;
    while(scanf("%d %d %d %d", &n, &b, &h, &w)==4)
    {
        int ans = b;
        while(h--)
        {
            scanf("%d", &p);
            for(int i=0;i<w;++i)
            {
                scanf("%d", &a);
                if(a>=n && n*p < ans)
                    ans = n*p;
            }
        }
        if(ans == b)
            printf("stay home\n");
        else
            printf("%d\n", ans);
    }
}
