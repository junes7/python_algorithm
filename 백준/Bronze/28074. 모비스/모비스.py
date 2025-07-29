import sys
input=lambda:sys.stdin.readline().rstrip()
st,tar=input(),['M','O','B','I','S']
flag=True
for c in tar:
    if c not in st:
        flag=False
        break
print("YES" if flag else "NO")