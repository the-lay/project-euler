#include<iostream>
#include<algorithm> //max()
using namespace std;

int main()
{
    int ans = 0;
    for (int i=999; i >= 100; i--)
    {
        for (int j=i; j >= 100; j--)
        {
            int k=i*j, m=k, n=0;

            while (m > 0)
            {
                n += m%10;
                n *= 10;
                m /= 10;
            }

            n /= 10;
            if (k == n) ans = max(ans, k);

        }
    }
    cout << ans;

    return 0;
}
