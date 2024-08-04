n = int(input())
a = list(map(int, input().split()))

#ソートしたリストの2番目の要素が元のリストで何番目にあるか探索する

cnt = 1
sorted_a = sorted(a, reverse=True)

for i in range(n):
    if sorted_a[1] == a[i]:
        print(cnt)
    cnt += 1
