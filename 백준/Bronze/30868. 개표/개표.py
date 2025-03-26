import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    num=int(input())
    st=""
    if num//5>0:
        for _ in range(num//5):
            st+="++++ "
    if num%5>0:
        for _ in range(num%5):
            st+="|"
    print(st)