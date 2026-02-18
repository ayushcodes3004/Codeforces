#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;
        if (k == 1 && x == 1)
        {
            cout << "No" << endl;
        }
        else if (x != 1)
        {
            cout << "Yes" << endl;
            vector<int> temp;
            for (int i = 0; i < n; i++)
            {
                temp.push_back(1);
            }
            cout << temp.size() << endl;
            for (auto it : temp)
            {
                cout << it << " ";
            }
            cout << endl;
        }

        else
        {
            if (k == 2)
            {
                if (n % 2 == 0)
                {
                    cout << "Yes" << endl;
                    vector<int> temp;
                    for (int i = 0; i < n / 2; i++)
                    {
                        temp.push_back(2);
                    }
                    cout << temp.size() << endl;
                    for (auto it : temp)
                    {
                        cout << it << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "No" << endl;
                }
            }
            else
            {

                if (n % 2 == 0)
                {
                    cout << "Yes" << endl;
                    vector<int> temp;
                    for (int i = 0; i < n / 2; i++)
                    {
                        temp.push_back(2);
                    }
                    cout << temp.size() << endl;
                    for (auto it : temp)
                    {
                        cout << it << " ";
                    }
                    cout << endl;
                }
                else
                {
                    cout << "Yes" << endl;
                    vector<int> temp;
                    for (int i = 0; i < (n / 2) - 1; i++)
                    {
                        temp.push_back(2);
                    }
                    temp.push_back(3);
                    cout << temp.size() << endl;
                    for (auto it : temp)
                    {
                        cout << it << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}