import itertools

n, k = map(int, input().split())
s = list(input())

cnt = 0
comb_s = list(itertools.permutations(s))

for i in range(n):
    for j in range(n - 1):
        if comb_s[i][j] == comb_s[i][j + 1] and len():
            cnt += 1

print(n - cnt)
