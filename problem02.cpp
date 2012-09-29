#include <iostream>

int main(){
    long sum=0;

    for(int cur=2, old=1; cur<4000000; cur+=old, old=cur-old){
        if(!(cur%2))
            sum+=cur;
    }

    std::cout << sum;
}


