# 홀수와 짝수 그리고 더하기(Odd and even numbers and addition)
# 정수 2개를 입력 받은 후 아래와 같은 방식으로 출력
# 5 7이 입력되면 "홀수+홀수=짝수"가 출력
# 5 6이 입력되면 "홀수+짝수=홀수"가 출력
a, b = map(int, input().split())
print("홀수" if a % 2 == 1 else "짝수", '+', "홀수" if b % 2 == 1 else "짝수", '=', "홀수" if (a + b) % 2 == 1 else "짝수", sep='')