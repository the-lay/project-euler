#include <iostream>
using namespace std;

int term=3;
double a=1, b=1, c=a+b;
double at=0, bt=0, ct=0;

int main() {
    while(ct+1 < 1000)
        {
            a=b;
            b=c;
            at=bt;
            bt=ct;

            if(at == bt)
                c=a+b;
            else if(bt > at)
                c=(a*0.1)+b;

            while(c > 10) {
                c*=0.1;
                ct++;
            }
            term++;
        }
    cout << term << endl;
    return 0;
}
