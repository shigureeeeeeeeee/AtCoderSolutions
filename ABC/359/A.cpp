#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt = 0;
    vector<string> s(n);
    for (int i = 0; i < n; i++) cin >> s[i];
    
    for(int i = 0; i < n; i++) {
        if(s[i] == "Takahashi") cnt++;
    }
    cout << cnt << endl;
}
