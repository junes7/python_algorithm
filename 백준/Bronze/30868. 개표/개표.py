import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    num=int(input())
    arr=[num//5,num%5]
    st=""
    if arr[0]>0:
        for _ in range(arr[0]):
            st+="++++ "
    if arr[1]>0:
        for _ in range(arr[1]):
            st+="|"
    print(st)