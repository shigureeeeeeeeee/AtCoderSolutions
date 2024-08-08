#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t; cin >> s >> t;
    int len = s.length();
    
    for(int w = 1; w < len; ++w) { //文字を区切る長さ
        for(int c = 1; c <= w; ++c) { //区切る文字の位置
            string result;
            for(int i = c - 1; i < len; i += w) { //区切った文字を結合
                if(i < len) {
                    result += s[i];
                }
            }
            if(result == t){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

//C++の細かい仕様わからなすぎる