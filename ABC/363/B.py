#与えられたリストからP番目まで大きいものを抽出、その中で最小の数をTから引く。
n, t, p = map(int, input().split())
l = list(map(int, input().split()))

l_sorted = sorted(l, reverse=True)
ans = t - min(l_sorted[:p])

if ans < 1:
    print(0)
else:
    print(ans)