#include <iostream>
//a^2+b^2=c^2 and a+b+c=1000
//c=1000-a-b, substituting into first one
//a^2+b^2=(1000-a-b)^2
//a^2+b^2=1000000+a^2+b^2-2ab-2000b-2000a
//removing a^2+b^2 from both sides
//we get a=1000*(500-b)/(1000-b)
//a>0, so b<500 and 3<b (more than 3 because first pyth. triplet starts with 3)

int main()
{
    for(int b=1; b<500; b++)
    {
        int a=1000*(500-b)/(1000-b);
        int c=1000-a-b;
        if (a+b+c==1000 && a*a + b*b == c*c) {
            std::cout << a*b*c << std::endl;
            return 0;
        }
    }
}
