'''
두 수의 곱(the multiplication of two)
정수 num1, num2가 매개변수 주어집니다. num1과 num2를 곱한 값을
return 하도록 solution 함수를 완성해주세요.
'''
# method1
# def solution(num1,num2):
#     answer = num1*num2
#     return answer
# method2
solution=lambda x,y:x*y

if __name__ == "__main__":
    num1,num2=map(int,input().split())
    print(solution(num1,num2))