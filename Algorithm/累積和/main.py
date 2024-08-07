#累積和
a = [1,2,3,4,5,6,7,8,9,10]
s = [0] * len(a)

s[0] = a[0]

for i in range(1, len(a)):
    s[i] = s[i - 1] + a[i]
    
print(s)
print(s[6] - s[1])

#numpyつかった高速化
import numpy as np
a = [1,2,3,4,5,6,7,8,9,10]

s = np.cumsum(a)
print(s)
print(s[6] - s[1])
