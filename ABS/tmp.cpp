#include <bits/stdc++.h>
using namespace std;

int digit_sum(string n){
    int sum = 0;
    for(auto itr=n.begin();itr < n.end();itr++){
        sum += *itr - '0'; // *itrはchar型のため、数値に直すには'0'で引き算する。
    }
    return sum;
}
int main(){
    string n= "12345";
    cout << digit_sum(n) << endl;
}
