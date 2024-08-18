#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    bool can_smell = false;

    if (B < C) {
        // 通常のケース（就寝時間が起床時間より前）
        if (A < B || A >= C) {
            can_smell = true;
        }
    } else {
        // 日付をまたぐケース（起床時間が就寝時間より前）
        if (A < B && A >= C) {
            can_smell = true;
        }
    }

    if (can_smell) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}