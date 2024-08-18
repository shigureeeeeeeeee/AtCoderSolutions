#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    vector<long long> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    
    vector<long long> cumulative(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        cumulative[i] = cumulative[i-1] + A[i-1];
    }
    
    unordered_map<int, int> count;
    long long result = 0;
    
    for (int i = 0; i <= N; i++) {
        int mod = cumulative[i] % M;
        if (mod < 0) mod += M; // 負の余りを正の余りに変換
        result += count[mod];
        count[mod]++;
    }
    
    cout << result << endl;
    
    return 0;
}