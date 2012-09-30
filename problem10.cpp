#include<iostream>
#include<math.h> //sqrt()
using namespace std;

int main()
{
    __int64 res = 17; //sum of first 4 primes
    int i=11; //5th prime
    bool ifPrime=0;

    while (i<2000000)
    {
          for (int div=3; div<=sqrt(i); div+=2)
          {
              if (i%div==0) {ifPrime=0; break;}
              else ifPrime=1;
          }
          if (ifPrime) res+=i;
          i+=2;
    }

    cout << res << endl;

    return 0;
}
