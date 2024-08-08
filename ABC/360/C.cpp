#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n), w(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> w[i];
    
    //何個からの箱があるかを調べる
    //物が２つ以上入っている箱から一つになるまで小さい順に取り出す。
    //2回全探索する必要あるけど計算量足りるのか

    
}