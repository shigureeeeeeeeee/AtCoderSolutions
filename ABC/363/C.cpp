#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << ": " << x << endl;

bool is_palindrome(const string& s, int start, int length) {
    for (int i = 0; i < length / 2; i++) {
        if (s[start + i] != s[start + length - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;

    sort(s.begin(), s.end());
    int cnt = 0;

    do {
        bool flag = false;
        for (int i = 0; i <= n - k; i++) {
            if (is_palindrome(s, i, k)) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            cnt++;
        }
    } while (next_permutation(s.begin(), s.end()));

    cout << cnt << endl;
    return 0;
}