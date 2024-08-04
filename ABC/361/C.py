N, K = map(int, input().split())
A = list(map(int, input().split()))

A.sort()

min_diff = float("inf")  # 無限大で初期化

for i in range(K + 1):
    if i + (N - K) <= N:
        diff = A[i + (N - K) - 1] - A[i]
        min_diff = min(min_diff, diff)

print(min_diff)
