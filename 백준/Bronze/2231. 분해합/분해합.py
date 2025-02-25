import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
def digit_sum(num):
    total=0
    while num>0:
        total+=num%10
        num//=10
    return total
result=0
for i in range(max(1,n-len(str(n)*9)),n):
    if i+digit_sum(i)==n:
        result=i
        break
print(result)