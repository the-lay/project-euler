#include <iostream>
#include <iomanip> //setprecision()
using namespace std;

//used combinatoriсs for this
//it's the binomial coefficient with 40 on top and 20 on the bottom
//we have 40 steps to reach the finish(20 for x, 20 for y)
//so the real problem is:
//how many different ways can you choose 20 elements out of a set of 40 elements.

long double factorial (int n)
{
    long double res=1;
    for (int i=n; i>0; i--) res*=i;
    return res;
}

int main()
{
    cout << setprecision (300) << factorial(40)/(factorial(20)*factorial(20));
}
