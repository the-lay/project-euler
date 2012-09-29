#include <iostream>

int main() {
    int res=0;

    for(int i=2520; res==0; i+=2520) {
        for(int j=20; j >= 1; j--) {
            if (i%j != 0)
                break;
            else if(j == 1)
                res=i;
        }
    }
    std::cout << res;
    return 0;
}
