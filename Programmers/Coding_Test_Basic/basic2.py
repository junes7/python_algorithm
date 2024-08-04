'''
두 수의 차(the subtraction of two)
정수 num1과 num2가 주어질 때, num1에서 num2를 뺀 값을
return하도록 soltuion 함수를 완성해주세요.
'''
# method1
# def solution(num1,num2):
#     answer = num1-num2
#     return answer
# method2
solution = lambda x,y:x-y

if __name__=="__main__":
    num1,num2=map(int,input().split())
    print(solution(num1,num2))