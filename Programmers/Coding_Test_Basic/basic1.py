'''
두 수의 합(the sum of two)
정수 num1과 num2가 주어질 때, num1과 num2의 합을
return하도록 soltuion 함수를 완성해주세요.
'''
# method1
# def solution(num1, num2):
#     answer = num1+num2
#     return answer
# method2
# solution=lambda *x:sum(x)
# method3
solution=lambda x,y:x+y

if __name__ == "__main__":
    num1,num2=map(int,input().split())
    print(solution(num1,num2))