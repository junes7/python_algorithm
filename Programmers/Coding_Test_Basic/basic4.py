'''
몫 구하기(get quotient)
정수 num1, num2가 매개변수로 주어질 때, num1을 num2로 나눈 몫을
return 하도록 solution 함수를 완성해주세요.
'''
# method1
# def solution(num1,num2):
#     answer=num1//num2
#     return answer
# method2
solution = lambda x,y:divmod(x,y)[0]

if __name__ == "__main__":
    num1,num2=map(int,input().split())
    print(solution(num1,num2))