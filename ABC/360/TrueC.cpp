#include <bits/stdc++.h>
using namespace std;
//すべての荷物の重さの合計 ー 各箱の最大の重さの合計で解が求められる。

int main() {
    int n; cin >> n;
    vector<int> a(n), w(n);
    vector<int> max_w(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> w[i];
    
    for(int i = 0; i < n; ++i) {
        a[i]--;
        max_w[a[i]] = max(max_w[a[i]], w[i]);
    }
    const int sum_w = accumulate(w.begin(), w.end(), 0); //wの総和
    const int sum_max = accumulate(max_w.begin(), max_w.end(), 0); //max_wの総和
    cout << sum_w - sum_max << endl;
}
//数式こねこね問題だったのか