#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    vector<int> result;
    
    for (int i = K; i < N; i++) {
        result.push_back(A[i]);
    }
    
    for (int i = 0; i < K; i++) {
        result.push_back(A[i]);
    }

    for (int i = 0; i < N; i++) {
        cout << result[i];
        if (i < N - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
