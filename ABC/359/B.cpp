#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < i; j++) {
                cout << a[i] << " " << a[j + 2] << endl;
            if(a[i] == a[j + 2]) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}