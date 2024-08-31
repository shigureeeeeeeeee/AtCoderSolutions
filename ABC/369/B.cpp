#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> A(N);
    vector<char> S(N);
    
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> S[i];
    }
    
    int left_pos = -1, right_pos = -1;
    int fatigue = 0;
    
    // cout << "Debug: Input received" << endl;
    
    for (int i = 0; i < N; i++) {
        if (S[i] == 'L') {
            if (left_pos == -1) {
                left_pos = A[i];
            } else {
                fatigue += abs(A[i] - left_pos);
                left_pos = A[i];
            }
        } else {
            if (right_pos == -1) {
                right_pos = A[i];
            } else {
                fatigue += abs(A[i] - right_pos);
                right_pos = A[i];
            }
        }
        // cout << "Debug: Step " << i+1 << " - L(" << left_pos << ") R(" << right_pos << ") Fatigue: " << fatigue << endl;
    }
    
    // cout << "Debug: Final L(" << left_pos << ") R(" << right_pos << ")" << endl;
    // cout << "Debug: Total Fatigue: " << fatigue << endl;
    
    cout << fatigue << endl;
    
    return 0;
}