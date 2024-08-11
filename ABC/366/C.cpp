#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int Q;
    cin >> Q;

    map<int, int> bag;

    for (int i = 0; i < Q; i++) {
        int query_type;
        cin >> query_type;

        if (query_type == 1) {
            int x;
            cin >> x;
            bag[x]++;
        } 
        else if (query_type == 2) {
            int x;
            cin >> x;
            if (bag.find(x) != bag.end()) {
                bag[x]--;
                if (bag[x] == 0) {
                    bag.erase(x);
                }
            }
        } 
        else if (query_type == 3) {
            cout << bag.size() << '\n';
        }
    }

    return 0;
}
