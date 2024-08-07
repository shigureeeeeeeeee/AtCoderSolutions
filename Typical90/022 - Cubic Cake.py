#a, b, cの最大公約数を求めてその長さの立方体を切り出す
# a, b, c = map(int, input().split())

# def gcd(a, b):
#     while b:
#         a, b = b, a % b
#     return a

# GCD = gcd(gcd(a, b), c)
# ans = (a/GCD-1) + (b/GCD-1) + (c/GCD-1)
# print(int(ans))
#なんかこれだと入力例3がだめだった。mathにgcdがあるらしい
import math

a, b, c = map(int, input().split())

gcd = math.gcd(math.gcd(a, b), c)
ans = (a+b+c) // gcd -3

print(ans)



