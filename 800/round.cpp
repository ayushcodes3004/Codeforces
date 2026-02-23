#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int pow = 1;
        while (pow * 10 < n)
        {
            count += 9;
            pow *= 10;
        }
        count += n / pow;
        cout << count << endl;
    }
    return 0;
}