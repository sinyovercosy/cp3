#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> count_points(vector<char> suit)
{
    int rp = 0, tp = 0, st = 0, inc = 0;
    for(auto card : suit)
    {
        if(card == 'A')
        {
            inc += 4;
            st = 1;
        }
        if(card == 'K')
        {
            if(suit.size() > 1)
            {
                inc += 3;
                st = 1;
            }
            else
                inc += 2;
        }
        if(card == 'Q')
        {
            if(suit.size() > 2)
            {
                inc += 2;
                st = 1;
            }
            else
                inc += 1;
        }
        if(card == 'J' && suit.size() > 3)
            inc++;
        rp = inc;
        tp = rp;
        if(suit.size() == 2)
            tp += 1;
        if(suit.size() < 2)
            tp += 2;
    }
    vector<int> p = {rp, tp, st};
    return p;
}

int main()
{
    vector<char> s, h, d, c;
    string card = "";
    int count = 0;
    while(cin >> card)
    {
        switch(card[1])
        {
            case 'S': s.push_back(card[0]); break;
            case 'H': h.push_back(card[0]); break;
            case 'D': d.push_back(card[0]); break;
            case 'C': c.push_back(card[0]); break;
        }
        if(++count==13)
        {
            vector<int> spt = count_points(s);
            vector<int> hpt = count_points(h);
            vector<int> dpt = count_points(d);
            vector<int> cpt = count_points(c);

            int rp = spt[0]+hpt[0]+dpt[0]+cpt[0];
            int tp = spt[1]+hpt[1]+dpt[1]+cpt[1];
            bool nt = rp >= 16 && spt[2] && hpt[2] && dpt[2] && cpt[2];

            if(tp<14)
                cout << "PASS" << endl;
            else if(nt)
                cout << "BID NO-TRUMP" << endl;
            else
            {
                vector<int> sz;
                sz.push_back(s.size());
                sz.push_back(h.size());
                sz.push_back(d.size());
                sz.push_back(c.size());
                int id = distance(sz.begin(), max_element(sz.begin(),sz.end()));
                switch(id)
                {
                    case 0: cout << "BID S" << endl; break;
                    case 1: cout << "BID H" << endl; break;
                    case 2: cout << "BID D" << endl; break;
                    case 3: cout << "BID C" << endl; break;
                }
            }


            count = 0;
            s.clear();
            h.clear();
            d.clear();
            c.clear();
        }
    }
    return 0;
}
