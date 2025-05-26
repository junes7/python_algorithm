import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    st=input()
    s=0
    for c in st:
        s+=int(c)
    s+=int(st[-3:])*10
    if s<1000:
        s+=1000
    elif s>9999:
        s=str(s)[-4:]
    print(s)