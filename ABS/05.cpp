#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x; cin >> a >> b >> c >> x;
    int cnt = 0;
    
    for(int A = 0; A <= a; A++) {
        for(int B = 0; B <= b; B++) {
            for(int C = 0; C <= c; C++) {
                if(500 * A + 100 * B + 50 * C == x) cnt++;
            }
        }
    }
    cout << cnt << endl;
}