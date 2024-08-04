'''
문자열 겹쳐쓰기
문자열 my_string, overwrite_string과 정수 s가 주어집니다.
문자열 my_string의 인덱스 s부터 overwrite_string의 길이만큼을
문자열 overwrite_string으로 바꾼 문자열을
return 하는 solution 함수를 작성해 주세요.
'''
def solution(my_string,overwrite_string,s):
    # method1
    # s_len=len(overwrite_string)
    # answer=my_string[:s]+my_string[s:(s+s_len)].replace(my_string[s:(s+s_len)],overwrite_string[:],1)+my_string[(s+s_len):]
    # method2
    answer=my_string[:s]+overwrite_string+my_string[(s+len(overwrite_string)):]
    return answer

if __name__ == "__main__":
    my_string,overwrite_string=map(str,input().split())
    s=int(input(),10)
    print(solution(my_string,overwrite_string,s))