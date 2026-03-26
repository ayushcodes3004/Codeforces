#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        string s = to_string(N);
        int n = s.size();
        int ans = INT_MAX;
        for (int i = n - 1; i > 0; i--)
        {
            if (s[i] == '0')
            {
                int j = i - 1;
                while (j >= 0)
                {
                    if (s[j] == '0' || s[j] == '5')
                    {
                        int mini = i - j - 1 + (n - i - 1);
                        ans = min(ans, mini);
                    }
                    j--;
                }
            }
            else if (s[i] == '5')
            {
                int j = i - 1;
                while (j >= 0)
                {
                    if (s[j] == '7' || s[j] == '2')
                    {
                        int mini = i - j - 1 + (n - i - 1); //(n - i - 1)=>deletion after i
                        ans = min(ans, mini);
                    }
                    j--;
                }
            }
            else
            {
                continue;
            }
        }
        cout << ans << endl;
    }
    return 0;
}