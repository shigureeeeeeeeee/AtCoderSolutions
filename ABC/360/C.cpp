 //解き方としては合ってるけどこれじゃTELになるからもっと計算量を減らす
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n), w(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> w[i];
    
    unordered_set<int> set_a(a.begin(), a.end()); //高速に検索、挿入、削除ができ要素が重複しない
    
    int empty_cnt = 0; //空箱の数
    for(int i = 1; i <= n; ++i) {
        if(set_a.find(i) == set_a.end()) {
            empty_cnt++;
        }
    }
    
    map<int, vector<int>> boxes; //aをインデックスとしてwの値を格納
    for(int i = 0; i < n; i++) {
        boxes[a[i]].push_back(w[i]);
    }
    
    long long ans = 0; //移動コストの最小値

    while(empty_cnt > 0) {
        for(auto& [box, contents] : boxes) {
            if(contents.size() >= 2) { 
                auto min_it = min_element(contents.begin(), contents.end()); //最小の要素を見つける
                int min_value = *min_it;
                
                ans += min_value;
                
                contents.erase(min_it); //見つけた最小要素を削除(箱から出す)
                
                empty_cnt--; //空箱の数を減らす
                if(empty_cnt == 0) break; //箱がなくなったら終わり
            }
        }
    }
    
    cout << ans << endl;
}