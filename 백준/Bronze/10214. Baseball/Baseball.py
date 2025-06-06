import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    sum_y,sum_k=0,0
    for _ in range(9):
        y,k=map(int,input().split())
        sum_k+=k
        sum_y+=y
    print("Draw" if sum_y==sum_k else "Yonsei" if sum_y>sum_k else "Korea")