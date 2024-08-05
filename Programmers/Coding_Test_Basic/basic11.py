'''
문자열 my_string과 정수 k가 주어질 때, my_string을 k번 반복한 문자열을
return 하는 solution 함수를 작성해 주세요.
'''
def solution(my_string,k):
    # method1
    # answer=''.join(my_string)*k
    # method2
    answer=my_string*k
    return answer

if __name__ == "__main__":
    my_string=input()
    k=int(input(),10)
    print(solution(my_string,k))