import numpy as np

h, w = map(int, input().split())
a = [list(map(int, input().split())) for _ in range(h)]  # 無駄に変数を使わないためにfor _ in rangeを使用する。

ans = a #初期化の代わり

line_sum = np.sum(a, axis=1) #行の合計値
column_sum = np.sum(a, axis=0) #列の合計値

for i in range(h):
    for j in range(w):
        ans[i][j] = line_sum[i] + column_sum[j] - a[i][j] #重複している要素を引く

for i in range(h):
    print(*ans[i]) #アンバック演算子っていうらしい