import sys
input=lambda:sys.stdin.readline().rstrip()
n,st=int(input()),input()
alpha=[0]*26
for c in st:
    if c.isalpha():
        alpha[ord(c)-97]+=1
print(max(alpha))