#もう一回解く

n, l = map(int, input().split())
k = int(input())
a = list(map(int, input().split()))

# 2分探索で解けるらしい(最大値、最小値を最小化、最大化する問題には有効なことが多いっぽい)
# 切断されてできるK+!個のようかんの長さをすべてx以上とすることはできるか？


def check(x):  # すべての長さをx以上にすることは可能か判断する。
    num = 0  # 何個切れたか
    pre = 0  # 前回の切れ目
    for i in range(n):
        if a[i] - pre >= x:  # xを超えたら切断を行う
            num += 1
            pre = a[i]

    if l - pre >= x:  # 最後のピースがx以上なら加算
        num += 1

    return num >= k + 1


# 二分探索
left, right = -1, l + 1
while right - left > 1:
    mid = (left + right) // 2
    if check(mid):
        left = mid
    else:
        right = mid

print(left)
