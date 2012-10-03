#include <iostream>
#include <cmath> //floor() and sqrt()
using namespace std;

int divisors(long num) {
    int divs = 0;
    long root = floor(sqrt(num));
    for(long i=root; i > 0; i--) {
        if(num%i == 0)
            divs += 2;
    }
    return divs;
}

int main() {
    int max=0, divs=0;
    long num=0, triangle=1, i=1;
    while(max <= 500) {
        divs=divisors(triangle);
        if(divs > max) {
            max=divs;
            num=triangle;
        }
        i++;
        triangle+=i;
    }
    cout << num << endl;
    return 0;
}
