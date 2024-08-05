s = list(input())  # list(map(int,input().split()))じゃ一文字ごとにリストに格納できないらしい

cnt_r = 0
cnt_m = 0

for i in range(len(s)):
    if s[i] == "R":
        cnt_r = i
    elif s[i] == "M":
        cnt_m = i

if cnt_r > cnt_m:
    print("No")
else:
    print("Yes")
