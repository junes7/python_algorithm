import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
box=[*map(int,input().split())]
book=[*map(int,input().split())]
for i in range(len(book)):
    for j in range(len(box)):
        if book[i]>box[j]:
            continue
        box[j]-=book[i]
        break
print(sum(box))