# 짝수 합 구하기
# Get sum of even number
# 정수 1개를 입력받아 1부터 그 수까지 짝수만 합한 값을 출력해 보자.
s=0
for i in range(1,int(input())+1):
    if i%2==0:
        s+=i
print(s)