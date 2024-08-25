#include <bits/stdc++.h>
using namespace std;

//上下左右への移動を表すベクトル
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

int h, w;
vector<string> c;
bool seen[510][510];

void dfs(int h, int w) {
    seen[h][w] = true;

    for(int dir = 0; dir < 4; ++dir) { //dirはdirection(方向)の略
    //グラフを移動できるようにする
        int nh = h + dx[dir];
        int nw = w + dy[dir];
        
        if(nh < 0 || nh >= ::h || nw < 0 || nw >= ::w) continue; //グラフの外に出たらスキップ
        if(c[nh][nw] == '#') continue; //壁にぶつかったらスキップ
        if(seen[nh][nw]) continue; //すでに訪れたことがあるならスキップ
        dfs(nh, nw); //再帰的に探索
    }
}

int main() {
    cin >> h >> w;
    c.resize(h); //resize関数でcのサイズをhに変更, resize関数は要素数を変更できるらしい
    for(int i = 0; i < h; ++i) cin >> c[i];

    //ここあんまり理解してない
    int sh, sw, gh, gw;
    for(int i = 0; i < h; ++i) {
        for(int j = 0; j < w; ++j) {
            if(c[i][j] == 's') sh = i, sw = j;
            if(c[i][j] == 'g') gh = i, gw = j;
        }
    }

    memset(seen, 0, sizeof(seen)); //memset関数でseen配列をfalseに初期化, 特定のメモリ領域を指定されたバイト値で埋めるらしい
    dfs(sh, sw);

    if(seen[gh][gw]) cout << "Yes" << endl;
    else cout << "No" << endl;
}