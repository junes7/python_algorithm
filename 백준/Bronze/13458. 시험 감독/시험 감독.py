import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
arr = list(map(int,input().split()))
B, C = map(int, input().split())
count = 0
sum_ = B + C #총,부감독 각 한명이 관리할 수 있는 인원
for i in range(len(arr)):
    if B > arr[i] or B == arr[i]:
        count += 1
    elif sum_ > arr[i] or sum_ == arr[i]:
        count += 2        
    else:
        quo = (arr[i]- B) // C
        rem = (arr[i]- B) % C        
        if rem == 0:
            count += quo #추가되는 부감독의 수
            count += 1 #총감독 = 1명
        else:
            count += quo
            count += 2 #총감독 = 1명, 추가되는 부감독 = 1명
print(count)