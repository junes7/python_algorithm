import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(1,int(input())+1):
    st=[*reversed(input().split())]
    print("Case #%d: %s" % (i,' '.join(st)))