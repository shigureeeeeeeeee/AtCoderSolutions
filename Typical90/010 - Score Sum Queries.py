#L~Rの和を求めるとTELになった。累積和ってやつを使うといいらしい
n = int(input())

#1組、2組で分けて得点を格納
c1 = [0] * n
c2 = [0] * n

for i in range(n):
    c, p = map(int, input().split())
    if c == 1:
        c1[i] = p
    else:
        c2[i] = p
        

s1 = [0] * (n + 1)
s2 = [0] * (n + 1)

for i in range(n):
    s1[i + 1] = s1[i] + c1[i]
    s2[i + 1] = s2[i] + c2[i]
    
#Q個のクエリに対してL~Rまでの和を求める
#L版は和に含めるので、L-1番までの和をマイナスする

q = int(input())

for _ in range(q):
    l, r = map(int, input().split())
    sum1 = s1[r] - s1[l - 1]
    sum2 = s2[r] - s2[l - 1]
    print(sum1, sum2)