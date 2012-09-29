#include <iostream>

int main()
{
    int res=0;
    for(int i=0; i<1000; i++)
    {
        if (!(i%3) || !(i%5)) res+=i;
    }
    std::cout << res;
}
