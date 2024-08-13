#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    int ans = 0;

    // ABピザの枚数を全探索
    for (int i = 0; i <= x + y; i++)
    {
        // ABピザのコスト
        int cost = c * i;

        // 残りのAピザとBピザのコスト
        int remain_x = max(0, x - i / 2);
        int remain_y = max(0, y - i / 2);

        cost += a * remain_x + b * remain_y;
        ans = min(ans, cost);
    }
    cout << ans << endl;
}