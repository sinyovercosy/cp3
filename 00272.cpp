#include <iostream>

int main()
{
    char c = 0;
    int first = 1;
    while(std::cin.get(c))
    {
        if(c=='\"')
        {
            std::cout << (first?"``":"''");
            first = !first;
        }
        else
            std::cout << c;
    }
    return 0;
}
