#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a;
    cin >> n >> a;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
        cin >> t[i];

    for (int i = 0; i < n - 1; i++)
    {
        if (a >= t[i + 1])
        {
            t[i + 1] = a + t[i];
            cout << t[i + 1] << endl;
        }
        else if (a < t[i + 1])
        {
            t[i + 1] = a + t[i + 1];
            cout << t[i + 1] << endl;
        }
        cout << t[i + 1] << endl;
    }
    for (int i = 0; i < n; i++)
    {
        cout << t[i] << endl;
    }
}