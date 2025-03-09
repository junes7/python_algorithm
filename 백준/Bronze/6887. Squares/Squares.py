import sys
input=lambda:sys.stdin.readline().rstrip()
n,i=int(input()),1
while i**2<=n:
    i+=1
print("The largest square has side length "+str(i-1)+".")