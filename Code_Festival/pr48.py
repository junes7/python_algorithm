# 대소문자 바꿔서 출력
# print with changing uppercase and lowercase
n=input()
b=[]
for i in n:
    if i.islower():
        b.append(i.upper())
    else:
        b.append(i.lower())
for i in b:
    print(i,end='')