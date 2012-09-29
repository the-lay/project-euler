#include <iostream>
#include <string>
#include <sstream>
using namespace std;

bool isPalindrome(int a)
{
    ostringstream convert;
    convert << a;
    string str = convert.str();
    string r_str (str.rbegin(), str.rend());
    if (str.compare(r_str)==0) return true;
    else return false;
}

int main()
{
    int res=0;

    for (int a=999; a>=100; a--)
    {
        for (int b=a; b>=100; b--) //for true brute force use b=999 :)
        {
            if (isPalindrome(a*b)) {
                if ((a*b) > res)
                    res = a*b;
            }
        }
    }
    cout << res;
}
