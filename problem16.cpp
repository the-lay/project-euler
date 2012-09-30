#include <iostream>
#include <math.h> //pow()
#include <sstream> //stringstream
#include <cstdlib> //atoi()
using namespace std;

int main(){
    stringstream ss;
    string number = "";
    int sum=0;
    ss.setf(ios::fixed);

    ss << pow(2, 1000);
    ss >> number;

    for(unsigned int i = 0; i < number.length(); i++)
        sum += atoi(number.substr(i,1).c_str());

    cout << sum;
    return 0;
}
