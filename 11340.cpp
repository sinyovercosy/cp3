#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int nc, nl, total=0;
        map<char, int> cval;
        
        cin >> nc;
        while(nc--)
        {
            char c;
            int i;
            cin >> c >> i;
            cval[c] = i;
        }
        string line;
        cin >> nl;
        cin.ignore(9999, '\n');
        while(nl--)
        {
            getline(cin, line);
            for(int i=0;i<line.length();++i)
                if(cval.find(line[i]) != cval.end())
                    total += cval[line[i]];
        }
        printf("%.2f$\n", total / 100.0);
    }
}
