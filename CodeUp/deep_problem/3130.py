# 소들의 헤어스타일(cow hair style)
# 농부 존의 N마라의 소들이 있다.
# 소들은 헤어스타일에 예민하기 때문에, 다른 소들의 헤어 스타일을 보고 싶어한다.
# i번째 소들의 키가 hi이고, 모든 소들은 일렬로 서 있고 오른쪽으로만 볼 수 있다.
# i번째 소가 볼 수 있는 다른 소의 헤어 스타일은 i+1, i+2, ... 이다.
# 그런데 자기 보다 키가 같거나 큰 소가 있으면 그 다음에 있는 모든 소들의
# 헤어스타일은 보지 못한다.
# 예) N=6, H = { 10, 3, 7, 4, 12, 2 }인 경우
# 입력받은 수 보다 작은 값이면 pop하여 앞에 잇는 소들이 자신보다 키 큰 소들만
# 남게 할 수 있습니다. 자신을 볼 수 있는 소가 몇 마리인지 파익하는 것으로
# 접근할 수 있습니다.
# method 1
n = int(input())
d = [0] * n
top, sum = -1, 0
for i in range(n):
    s = int(input())
    if d[top] <= s:
        while top != -1 and d[top] <= s:
            d[top] = 0
            top -= 1
    top += 1  
    d[top] = s
    sum += top 
print(sum)