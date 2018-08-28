#include <cstdio>
#include <algorithm>

int main()
{
    int T, n = 1, x[3];
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d %d %d", x, x+1, x+2);
        std::sort(x, x+3);
        printf("Case %d: %d\n", n++, x[1]);
    }
}
