#include <iostream>
#include <string>
using namespace std;

int main()
{
    int l;
    while(cin>>l, l)
    {
        string input;
        char dir = 'x', ndir, sign = '+', nsign;
        for(int i=1;i<l;i++)
        {
            cin >> input;
            if(input=="No")
                continue;
            nsign = input[0]; ndir = input[1];
            if(dir == 'x')
            {
                sign = (sign==nsign?'+':'-');
                dir = ndir;
            }
            else if(dir == ndir)
            {
                sign = (sign==nsign?'-':'+');
                dir = 'x';
            }
        }
        printf("%c%c\n",sign,dir);
    }
}
