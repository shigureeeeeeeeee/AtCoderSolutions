xA, yA = map(int, input().split())
xB, yB = map(int, input().split())
xC, yC = map(int, input().split())

#三平方の定理でいけるはず

AB2 = (xA - xB) ** 2 + (yA - yB) ** 2
BC2 = (xB - xC) ** 2 + (yB - yC) ** 2
CA2 = (xC - xA) ** 2 + (yC - yA) ** 2

if AB2 + BC2 == CA2 or BC2 + CA2 == AB2 or CA2 + AB2 == BC2:
    print("Yes")
else:
    print("No")
