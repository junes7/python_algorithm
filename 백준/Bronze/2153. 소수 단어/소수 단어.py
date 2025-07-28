import sys
input=lambda:sys.stdin.readline().rstrip()
st,cnt=input(),0
for c in st:
    cnt+=ord(c)-((65-26) if c.isupper() else 97)+1
flag=True
for i in range(2,cnt):
    if cnt%i==0:
        flag=False
        break
print("It is a prime word." if flag else "It is not a prime word.")