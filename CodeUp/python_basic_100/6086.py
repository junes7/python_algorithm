# 거기까지! 이제 그만~
# 1 부터 순서대로 계속 더해가다가 그 합이
# 입력된 정수보다 커지거나 같아지는 경우, 
# 그때까지의 합을 출력하자
# method 1
n = int(input())
c = 1
s = 0
while True:
    s += c
    c += 1
    if s>= n:
        break
print(s)