# (재귀 함수 Recursive Function) 1부터 n까지 역순으로 출력하기
# 정수 n부터 1까지 출력하는 재귀함수를 설계하시오.
# 정수 n이 입력 |n부터 1까지 한 줄에 하나씩 출력한다.
# method 1
d = int(input())

def Recur(n):
    if n == 1:
        print(n)
        return
    else:
        print(n)
        return Recur(n-1)
    
Recur(d)