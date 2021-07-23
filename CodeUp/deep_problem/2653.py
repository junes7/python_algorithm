# 규칙에 맞는 이진수 만들기(small)
# (create binary numbers that match the rules)
# 다음 두 가지 규칙을 지키면서 이진수를 만들고자 한다. 가능한 서로 다른
# 이진수의 개수를 구하는 프로그램을 작성하시오.
# 규칙1) 길이는 n이다.
# 규칙2) 0이 연속으로 존재하면 안된다.
# 예를 들어 길이가 3이라면, 길이가 3인 이진수는 다음과 같이 
# 000, 001, 010, 011, 100, 101, 110, 111 8가지이다. 이 중 0이 연속으로
# 사용된 3개를 제외한 010, 011, 101, 110, 111 의 5가지가 답이다.
# 이진수의 길이를 나타내는 자연수 n이 입력된다. 
# [입력값의 정의역] 1≤n≤20 | 가능한 경우의 수를 출력한다.
# 1 2
# 2 3
# 3 5
# 4 8
# method 1
n = int(input())
def binNum(n):
    if n == 1:
        return 2
    elif n == 2:
        return 3
    else:
        return binNum(n-1) + binNum(n-2)
print(binNum(n))