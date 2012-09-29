#include <iostream>

int sum_sq(int n)
{
    int res=0;
    for (int i=1; i<=n; i++) res+=(i*i);

    return res;
}

int sq_sum(int n)
{
    int res=0;
    for (int i=1; i<=n; i++) res+=i;

    return res*res;
}

int main()
{
    std::cout << sq_sum(100) - sum_sq(100);
}
