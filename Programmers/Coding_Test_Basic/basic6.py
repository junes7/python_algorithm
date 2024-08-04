'''
숫자 비교하기(compare the numbers)
정수 num1과 num2가 매개변수로 주어집니다. 두 수가 같으면
1 다르면 -1을 retrun하도록 solution 함수를 완성해주세요.
'''
# method1
# def solution(num1,num2):
#     answer=1 if num1==num2 else -1
#     return answer
# method2
solution=lambda x,y:1 if x==y else -1

if __name__ == "__main__":
    num1,num2=map(int,input().split())
    print(solution(num1,num2))