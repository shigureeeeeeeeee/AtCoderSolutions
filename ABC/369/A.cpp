#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;
    
    int count = 0;
    for (int x = -100; x <= 200; x++) {
        if ((x == A && A == B) ||
            (A < B && ((x < A && B - A == A - x) || (A < x && x < B && B - x == x - A) || (B < x && x - B == B - A))) ||
            (B < A && ((x < B && A - B == B - x) || (B < x && x < A && A - x == x - B) || (A < x && x - A == A - B)))) {
            count++;
        }
    }
    
    cout << count << endl;
    
    return 0;
}