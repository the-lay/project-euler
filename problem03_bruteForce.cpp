#include <iostream>
#include <math.h>

bool isPrime(int num)
{
    for(int i=2; i<num; i++)
    {
        if (num%i==0 && i!=num)
            return false;
    }
    return true;
}

int main()
{
    long long int x = 600851475143LL;

    for(long long int i=1; i<sqrt(x); i++) //for true brute force make the limit to the x :)
    {
        if(x%i == 0 && isPrime(i) == true)
            std::cout << i << std::endl;
    }
}
