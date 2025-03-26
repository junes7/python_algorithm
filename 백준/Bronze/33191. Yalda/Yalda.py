import sys
input=lambda:sys.stdin.readline().rstrip()
b=int(input())
obj=[int(input()) for _ in range(3)]
pref={1:"Watermelon",2:"Pomegranates",3:"Nuts"}
t=0
for i in range(3):
    if obj[i]>b:
        continue
    else:
        t=i+1
        break
print(pref.get(t,"Nothing"))