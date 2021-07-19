# 문자열 정렬하기(Sort String)
# 알파벳 소문자로 구성된 문자열이 n개 있다. 이 문자열을 사전순(오름차순)으로
# 정렬하시오.
# 첫 번째 줄에 n이 입력된다.(1<=n<=10,000)
# 1~n번째 줄까지 한 줄에 하나씩 알파벳 소문자 문자열이 입력된다.(각 문자열의
# 길이는 10글자 이하이다.) | 정렬된 결과를 출력한다.
# method 1
n = int(input())
d = []
for i in range(n):
    d.append(input())
d.sort()
for i in range(n):
    print(d[i])