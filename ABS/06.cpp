#include <bits/stdc++.h>
using namespace std;

int digit_sum(string n) {
    int sum = 0;
    for(auto itr = n.begin(); itr < n.end(); itr++) sum += *itr - '0';
    return sum;
}

int main() {
    int n, a, b; cin >> n >> a >> b;
    vector<int> num;

    for(int i = 0; i <= n; i++) {
        if(digit_sum(to_string(i)) >= a && digit_sum(to_string(i)) <= b)
            num.push_back(i);
    }
    
    int sum = 0;
    for(int i = 0; i < num.size(); i++) sum += num[i];
    cout << sum << endl;
}

//0からnまでで各桁の我がa以上b以下の物をチェックし、満たされてるやつは配列にいれる。最後にその総和を出す。