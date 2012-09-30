#include <iostream>
using namespace std;

bool isTriplet(int a, int b, int c)
{
    if(a*a + b*b == c*c) return true;
    else return false;
}

int main()
{
    int a=1, b=2, c=3;

    for(a=1; a<b; a++) //3<4<5
    {
        for(b=2; b<c; b++)
        {
            for(c=3; c<=1000; c++)
            {
                if (isTriplet(a,b,c) && a+b+c==1000)
                {
                    std::cout << a*b*c << std::endl;
                    return 0;
                }
            }
        }
    }
}
