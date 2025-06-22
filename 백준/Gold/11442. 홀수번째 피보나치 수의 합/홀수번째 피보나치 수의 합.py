import sys
input=lambda:sys.stdin.readline().rstrip()
n,dic=int(input()),{}
def fibo(n):
    a=n//3
    if n==0: return 0
    elif n==1 or n==2: return 1
    else:
        if n not in dic.keys():
            if n>100:
                dic[n]=(fibo(a)*fibo(n-a+1)+fibo(a-1)*fibo(n-a))%1000000007
            else:
                dic[n]=(fibo(n-1)+fibo(n-2))%1000000007
        return dic[n]
print(fibo(n+1) if n%2 else fibo(n))