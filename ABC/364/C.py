n, x, y = map(int, input().split())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

a_cnt = 0
b_cnt = 0
a_total = 0
b_total = 0
a_sorted = sorted(a, reverse=True)
b_sorted = sorted(b, reverse=True)

for i in range(n):
    a_total += a_sorted[i]
    a_cnt += 1
    b_total += b_sorted[i]
    b_cnt += 1
    if a_total > x or b_total > y:
        break

print(min(a_cnt, b_cnt))