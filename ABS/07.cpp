#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> b,c;
    
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            b.push_back(a[i]);
        } else {
            c.push_back(a[i]);
        }
    }

    int sum = 0;
    for(int i = 0; i < b.size(); i++) {
        sum += b[i];
    }
    for(int i = 0; i < c.size(); i++) {
        sum -= c[i];
    }
    cout << sum << endl;
}



//大きい順にそれぞれ別の配列に入れていってサイトに引き算する