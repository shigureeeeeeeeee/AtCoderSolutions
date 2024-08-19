n, l, r = map(int, input().split())
num = [i for i in range(1, n+1)]

rev = num[l-1:r][::-1]
ans = num[:l-1] + rev + num[r:]
print(*ans)