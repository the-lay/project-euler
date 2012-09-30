#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> primes;

bool isPrime(long long in)
{
    vector<int>::iterator it;
    for(it=primes.begin(); it<primes.end(); it++)
        {
            if (in%(*it)==0) return false;
        }
    primes.push_back(in);
    return true;
}

int main()
{
	unsigned long long res=0;
	primes.push_back(2);


	for (int i=3; i < 2000000; i += 2) //starting with 3 and +=2 because primes are odd, except 2
	{
        if (isPrime(i)) { cout << i << endl; res+=i; }
	}

	cout << res+2; //or you can make another loop to count elements of primes vector, then you wouldn't need to +2.

	return 0;
}
