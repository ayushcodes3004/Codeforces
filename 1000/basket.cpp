#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long d;
    cin >> n >> d;

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    long long left = -1;     // points to last taken weak player
    long long right = n - 1; // points to current strongest player
    long long team_size = 1;
    long long teams = 0;

    // Continue while we have unused players
    while (left < right)
    {
        // Current max power = a[right]
        // After coach boost → all players = a[right]
        // Total power = team_size * a[right]

        if ((a[right] * team_size) <= d && left < right)
        {
            // Team is NOT strong enough yet

            left++;      // take one weakest unused player
            team_size++; // increase team size
        }
        else
        {
            // Team is strong enough → can win

            teams++; // count this team

            right--;       // remove strongest player (used)
            team_size = 1; // reset for next team
        }
    }

    cout << teams << endl;
}