#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    int R, M; R = M = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'R')  R = i;
        if(s[i] == 'M')  M = i;
    }
    
    if(R < M) cout << "Yes" << endl;
    else cout << "No" << endl;
}
