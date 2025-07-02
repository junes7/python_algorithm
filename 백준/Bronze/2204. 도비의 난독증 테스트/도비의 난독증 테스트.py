import sys
input=lambda:sys.stdin.readline().rstrip()
while 1:
    st=input()
    if st=='0': break
    arr=sorted([input() for _ in range(int(st))],key=lambda x:x.lower())
    print(arr[0])