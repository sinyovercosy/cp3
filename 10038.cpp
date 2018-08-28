#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

int main()
{
    int len;
    while(cin >> len)
    {
        int n1, n2;
        bitset<3001> mask, goal;
        cin >> n1;
        for(int i=1;i<len;i++)
        {
            cin >> n2;
            mask.set(abs(n2-n1));
            n1 = n2;
            goal.set(i);
        }
        cout << (mask==goal?"Jolly\n":"Not jolly\n" );
    }
}
