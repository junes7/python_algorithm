import sys
input=lambda:sys.stdin.readline().rstrip()
cnt=1
while True:
    num1,cmd,num2=input().split()
    if cmd=="E":break
    print(f"Case {cnt}: {str(eval(cmd.join([num1,num2]))).lower()}")
    cnt+=1