# (재귀함수 Recursive Function) 두 수 사이의 홀수 출력하기
# print odd number between two integers
# 시작수(a)와 마지막 수(b)가 입력되면 a부터 b까지의 모든 홀수를 출력하시오.
# 두 수 a, b가 입력 | a-b의 모든 홀수를 모두 출력한다.
# method 1
a, b = map(int, input().split())

def Recur(c, d):
    if d % 2 == 0 and c > d:
        return
    elif d % 2 == 1 and c - d == 0:
        print(c, end=' ')
        return
    else:
        if c % 2 == 0:
            c += 1
            return Recur(c, d)
        else:
            print(c, end=' ')
            c += 2
            return Recur(c, d)
            
Recur(a, b)