#include <iostream>

int chain(unsigned int n)
{
    int terms=1;
    while(n>1)
    {
        if (n%2) n=3*n+1;
        else n/=2;
        terms++;
    }

    return terms;
}

int main()
{
    unsigned int longest=0, current, start;

    for (unsigned int i=0; i<1000000; i++)
    {
        current=chain(i);
        if (current>longest)
        {
            start=i;
            longest=current;
        }
    }
    std::cout << start;
    return 0;
}
