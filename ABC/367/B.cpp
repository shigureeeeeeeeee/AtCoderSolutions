#include <bits/stdc++.h>
using namespace std;

int main() {
    double X;
    cin >> X;

    string s = to_string(X);
    s = s.substr(0, s.find(".") + 4); 

    s.erase(s.find_last_not_of('0') + 1, string::npos);

    if (s.back() == '.') {
        s.pop_back();
    }

    cout << s << endl;

    return 0;
}
