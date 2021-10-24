# str 자료형의 응용
s=''
for i in range(101):
    s+=str(i)
result=0
for i in s:
    result+=int(i)
print(result)