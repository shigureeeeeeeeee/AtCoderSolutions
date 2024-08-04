N, M = map(int, input().split())
A = list(map(int, input().split()))

left = 0
right = max(A) + 1

# 二分探索
while right - left > 1:
    mid = (left + right) // 2

    # 現在の上限額で必要な総補助額を計算
    total = sum(min(a, mid) for a in A)

    if total <= M:
        left = mid
    else:
        right = mid

if left == max(A):
    print("infinite")
else:
    print(left)
