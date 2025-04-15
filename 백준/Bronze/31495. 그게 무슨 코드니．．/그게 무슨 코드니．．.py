import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
if st[0]==st[-1]=='"' and len(st[1:-1])>0:
    print(st[1:-1])
else:
    print("CE")