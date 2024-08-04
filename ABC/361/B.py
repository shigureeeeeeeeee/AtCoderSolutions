# 3平方の定理で行けそう

a, b, c, d, e, f = map(int, input().split())
g, h, i, j, k, l = map(int, input().split())


def judgment(x1, x2, x3, x4):
    if x1 < x3 < x2 or x1 < x4 < x2 or x3 < x1 < x4:
        return 1
    else:
        return 0


if judgment(a, d, g, j) == judgment(b, e, h, k) == judgment(c, f, i, l) == 1:
    print("Yes")
else:
    print("No")
