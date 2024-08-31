#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    bool flag = true;

    while(flag) {
        for(int i = 0; i < n; i++) {
            if(a[i] % 2 == 1) flag = false;
        }
        for(int i = 0; i < n; i++) a[i] /= 2;
        cnt++;
    }
    cout << cnt - 1 << endl;
}
