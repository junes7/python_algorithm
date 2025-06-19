import sys
input=lambda:sys.stdin.readline().rstrip()
def facto(n):
    f=1
    for i in range(2,n+1):
        f*=i
        while 1:
            if str(f)[-1]=='0':
                f//=10
            else:
                break
        f%=100000000000000000
    return str(f)[-5:]
print(facto(int(input())))