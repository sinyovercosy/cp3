#include <cstdio>

int main()
{
    int h, u, d, f;
    while(scanf("%d %d %d %d", &h, &u, &d, &f), h)
    {
        float prog = 0.0, goal = h, fd = u * f / 100.0;
        int day = 0, s = 0;
        while(prog >= 0)
        {
            if(u > fd * day)
                prog += u - fd * day;
            day++;
            if(prog>goal)
            {
                s = 1;
                break;
            }
            prog -= d;
        }
        printf("%s on day %d\n", s?"success":"failure", day);
    }
}
