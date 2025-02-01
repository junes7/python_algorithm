import sys
n=int(sys.stdin.readline().rstrip())
num=666
while n-1:
    num+=1
    if '666' in str(num):
        n-=1
print(num)