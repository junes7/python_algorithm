import sys
input=lambda:sys.stdin.readline().rstrip()
st,alpha=input(),[0]*26
for s in st:
    alpha[ord(s)-97]+=1
print(*alpha)