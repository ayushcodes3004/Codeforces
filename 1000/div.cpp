#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

long long next_prime(long long n)
{
    long long x = n;
    while (!isPrime(x))
    {
        x++;
    }
    return x;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        cin >> d;
        long long p = next_prime(d + 1);
        long long q = next_prime(p + d);
        long long ans = min(1LL * p * p * p, 1LL * p * q);
        cout << ans << endl;
    }
    return 0;
}