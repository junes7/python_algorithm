n=987;
# def solution(n):
#     answer=0;
#     while n>0:
#         answer+=n%10;
#         n//=10;
#     return answer;
def solution(N):
    answer=0;
    for n in str(N):
        answer+=int(n);
    return answer;
print(solution(n))