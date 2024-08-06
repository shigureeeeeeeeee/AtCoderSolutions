n = int(input())
cp = [map(int, input().split()) for _ in range(n)]
c, p = [list(i) for i in zip(*cp)]

print(c)
print(p)