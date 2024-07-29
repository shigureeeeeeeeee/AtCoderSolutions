n = int(input())
s = [input() for _ in range(n)]

for i in range(n-2): #最後の２つはどちらでも結果に関係ないので含めなくて良い
    if s[i] == s[i+1] =="sweet":
        print("No")
        exit() #breakはループから抜け出すものだが、exit()はプログラムを終了するもの
    
print("Yes")