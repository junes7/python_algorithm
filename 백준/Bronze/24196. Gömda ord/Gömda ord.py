import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
r,i=st[0],0
while i<len(st)-1:
    i+=ord(st[i])-65+1
    r+=st[i]
print(r)