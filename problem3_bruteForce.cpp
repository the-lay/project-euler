#include <iostream>
#include <math.h>

bool isPrime(int num)
{
   for(int i = 2; i < num; i++)
   {
      if (num % i == 0 && i != num)
         return false;
   }
   return true;
}

int returnPrime(int p)
{
   std::cout << p << std::endl;
   return p;
}

int main()
{
   long long int x = 600851475143LL;

   for(long long int i = 1; i < x; i++)
   {
      if(x % i == 0 && isPrime(i) == true)
      {
         returnPrime(i);
      }
   }
}
