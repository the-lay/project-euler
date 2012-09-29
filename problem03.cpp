#include <iostream>
#include <cmath>
using namespace std;

void primeFactor(unsigned long long a)
{
    for(unsigned long long i=2; i <= sqrt(a); i++)
    {
        if(a%i == 0)
        {
            primeFactor(a/i);
            return;
        }
    }
    cout << a;
    return;
}

int main()
{
    primeFactor(600851475143LL);
    return 0;
}

