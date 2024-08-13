import itertools

n, k = map(int, input().split())
s = input()
cnt = 0

perms = list(dict.fromkeys([''.join(p) for p in itertools.permutations(s)]))  # 組み合わせの全要素を列挙して重複要素を削除

for perm in perms:
    flag = False
    for i in range(len(perm) - k + 1):
        substring = perm[i:i+k]
        if substring == substring[::-1]:
            flag = True
            break
    if not flag:
        cnt += 1

print(cnt)
#C++に書き直したらTELでなかった