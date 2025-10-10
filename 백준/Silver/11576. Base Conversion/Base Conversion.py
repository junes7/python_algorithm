import sys
input=lambda:sys.stdin.readline().rstrip()
a,b = map(int,input().split())
m = int(input())
#m번 반복하라고 준거겠지?
arr = list(map(int,input().split()))
#10진수부터 구할까
arr.reverse()
ten = 0
for i in range(m):
    ten += arr[i]*(a**i)
# b진수 구하기
#나누어 떨어질때까지
result = []
while ten//b:
    result.append(ten%b)
    ten = ten//b
result.append(ten)
result.reverse()
print(' '.join(map(str,result)))