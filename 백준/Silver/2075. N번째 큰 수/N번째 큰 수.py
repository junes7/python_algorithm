import sys,heapq
input=lambda:sys.stdin.readline().rstrip()
que=[]
for _ in range(int(input())):
    total=[*map(int,input().split())]
    if not que:
        for num in total:
            heapq.heappush(que, num)
    else:
        for num in total:
            if que[0]<num:
                heapq.heappush(que, num)
                heapq.heappop(que)
print(que[0])