#include <iostream>
using namespace std;

bool isPrime (int number)
{
    for (int i=2; i<number; i++)
        if (!(number%i)) return false;

    return true;
}

int main()
{
    long long res=0;
    for (long long i=2; i<2000000; i++)
    {
        if(isPrime(i)) {res+=i;}
    }
    cout << res << endl;

    return 0;
}
