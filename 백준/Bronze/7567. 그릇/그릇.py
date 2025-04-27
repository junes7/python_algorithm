import sys
input=lambda:sys.stdin.readline().rstrip()
dish = list(input())
ans = 0
for i in range(len(dish)):
    if i == 0:
        ans += 10
    elif dish[i] == dish[i-1]:
        ans += 5
    else:
        ans += 10 
print(ans)