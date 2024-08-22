n, m = map(int, input().split())  # NとMを読み取る
a = list(map(int, input().split()))  # Aのリストを読み取る

x = []  # Xの行列を格納するリスト
for i in range(n):
    row = list(map(int, input().split()))  # 各行を読み取る
    x.append(row)

# 各栄養素の摂取量を計算
total_intake = [0] * m
for i in range(n):
    for j in range(m):
        total_intake[j] += x[i][j]

# 目標を達成しているか確認
for j in range(m):
    if total_intake[j] < a[j]:
        print("No")
        break
else:
    print("Yes")