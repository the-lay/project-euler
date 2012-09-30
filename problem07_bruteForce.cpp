#include <iostream>

bool isPrime (int number)
{
    for (int i=2; i<number; i++)
        if (!(number%i)) return false;

    return true;
}

int main() {
    int number=0, count=0;

    for(int i=2; count<10001; i++) {
        if(isPrime(i)) {
            count++;
            number=i;
        }
    }
    std::cout << number << std::endl;

    return 0;
}
