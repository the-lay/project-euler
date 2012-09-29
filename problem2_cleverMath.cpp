#include <iostream>
#include <cmath> //floor()

//Every two consecutive terms of Fib. seq. differ
//by Phi (Golden ratio). Every third Fib. number is
//even(1,1,!2!,3,5,!8!,13,21,!34!...).
//That means that the ration between two consecutive
//even terms of Fib. seq. differ by Phi^3 (4.236068).
//We can calculate next even number by multiplying
//previous by that Phi^3 and rounding to the nearest
//integer. And then just sum it up.
//Idea by RudyPenteado on P.Euler Problem 2 Thread

double round(double d)
{
    return floor(d + 0.5);
}

int main()
{
    double sum=0, ratio=4.236068, fib=2;
    while(fib<4000000)
    {
        fib=round(f1);
        sum+=fib;
        fib*=ratio;
    }
    std::cout << (int)sum;
}
