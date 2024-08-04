N = int(input())
A = [0]*N
B = [0]*N
for i in range(N):
    A[i],B[i] = list(map(int,input().split()))

a = sum(A)
b = sum(B)
if a <= 0 and b >= 0:
    for i in range(N):
        b = B[i] - A[i]
        if a + b >= 0:
            A[i] -= a
            break
        else:
            A[i] = B[i]
            a += b
    print("Yes")
    print(*A)
else:
    print("No")