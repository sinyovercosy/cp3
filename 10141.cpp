#include <iostream>
#include <string>
using namespace std;

int main()
{
    for(int i=1; i<1e9; i++)
    {
        int n, p, r, maxr = -1e9;
        float price, minp = 1e9;
        string name, dummy;
        cin >> n >> p;
        if(n==0 && p==0)
            break;
        if(i>1)
            cout << endl;
        getline(cin, dummy);
        while(n--)
            getline(cin, dummy);
        for(int ii = 0; ii < p; ++ii)
        {
            getline(cin, dummy);
            cin >> price >> r;
            if( r > maxr || ( r == maxr && price < minp ))
            {
                maxr = r; minp = price; name = dummy;
            }
            getline(cin, dummy);
            for(int j=0;j<r;j++)
                getline(cin, dummy);
        }
        cout << "RFP #" << i << endl << name << endl ;
    }

}
