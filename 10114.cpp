#include "stdio.h"

int main()
{
    int mm, n;
    float dp, l;
    while(scanf("%d %f %f %d", &mm, &dp, &l, &n), mm>0)
    {
        float mp = l / mm, bal = l, val = l + dp, rate[101], r;
        int month = 0, m;
        while(n--)
        {
            scanf("%d %f", &m, &r);
            for(int i=m;i<101;++i)
                rate[i] = r;
        }
        val -= val * rate[0];
        while(bal > val)
        {
            month++;
            bal -= mp;
            val -= val * rate[month];
        }
        printf("%d %s\n", month, month!=1?"months":"month");
    }
}
