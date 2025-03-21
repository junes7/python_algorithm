import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    sub,i,j=input().split()
    i,j=int(i),int(j)
    print(sub[:i]+sub[j:])