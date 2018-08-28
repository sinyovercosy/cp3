#include <cstdio>
#include <vector>
using namespace std;

int main()
{
    int s, b;
    while(scanf("%d %d", &s, &b), (s || b))
    {
        vector<int> leftof(1,0), rightof(1,0);
        for(int i=1;i<=s;++i)
        {
            leftof.push_back(i-1);
            rightof.push_back(i+1);
        }
        int l, r;
        while(b--)
        {
            scanf("%d %d", &l, &r);
            if(leftof[l] < 1)
                printf("* ");
            else
                printf("%d ", leftof[l]);
            if(rightof[r] > s)
                printf("*\n");
            else
                printf("%d\n", rightof[r]);
            rightof[leftof[l]] = rightof[r];
            leftof[rightof[r]] = leftof[l];
        }
        printf("-\n");
    }
}
