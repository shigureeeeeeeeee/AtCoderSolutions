n = int(input())
s = list(str(input()))
Acnt = 0
Tcnt = 0
Tflag = False
Aflag = False

for i in range(n):
    if s[i] == "T":
        Tcnt += 1
        if Tcnt >= n/2 and Aflag == False:
            Tflag = True

    elif s[i] == "A":
        Acnt += 1
        if Acnt >= n/2 and Tflag == False:

            Aflag = True

if Tcnt > Acnt:
    print("T")
elif Tcnt < Acnt:
    print("A")
else:
    if Tflag:
        print("T")
    elif Aflag:
        print("A")

