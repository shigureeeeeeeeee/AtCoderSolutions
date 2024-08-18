#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> R(N);
    for (int i = 0; i < N; ++i) {
        cin >> R[i];
    }

    vector<vector<int>> sequences;
    vector<int> current(N);

    function<void(int, int)> generateSequences = [&](int index, int sum) {
        if (index == N) {
            if (sum % K == 0) {
                sequences.push_back(current);
            }
            return;
        }

        for (int i = 1; i <= R[index]; ++i) {
            current[index] = i;
            generateSequences(index + 1, sum + i);
        }
    };

    generateSequences(0, 0);

    sort(sequences.begin(), sequences.end());

    for (const auto& seq : sequences) {
        for (int num : seq) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}