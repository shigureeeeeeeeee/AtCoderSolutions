n, k, x = map(int, input().split())
a = list(map(int, input().split()))

a.insert(k, x)

# 出力自体は同じだからあとは[]と,を削除する
# print(a)

print(*a) #「*」をアンバック演算子っていうらしいリストaの各要素を個別の引数としてprint()に渡してる
