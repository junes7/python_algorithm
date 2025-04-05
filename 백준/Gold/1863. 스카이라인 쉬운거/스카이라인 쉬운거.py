import sys
input=lambda:sys.stdin.readline().rstrip()
buildings = sorted([[*map(int, input().split())] for _ in range(int(input()))])
ans,stack = 0,[]
for x, y in buildings:
    if y==0:
        ans += len(stack)
        stack = []
        continue
    while stack and stack[-1]>y:
        stack.pop()
        ans += 1
    if not stack or stack[-1] < y:
        stack+=[y]
print(ans + len(stack))