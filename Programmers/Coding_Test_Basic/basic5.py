'''
두 수의 나눗셈(the Division of two)
정수 num1과 num2가 매개변수로 주어질 때, num1을 num2로 나눈 값에
1,000을 곱한 후 정수 부분을 return 하도록 soltuion 함수를 완성해주세요.
'''
# method1
# def solution(num1,num2):
#     answer=int(num1/num2*1000)
#     return answer
# method2
# solution=lambda x,y:int(x/y*1000)
# method3
solution=lambda x,y:divmod(x*1000,y)[0]

if __name__ == "__main__":
    num1,num2=map(int,input().split())
    print(solution(num1,num2))