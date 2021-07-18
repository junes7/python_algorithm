# 문자열 확대하기(enlarge string)
# CODEUP문제에서 우리는 미리 문자열을 저장해 놓았었다. 이것을 일반화
# 시켜보자. 이번에는 가로배율 w, 세로 배율 h, 그리고 문자열의 높이 n을
# 입력받는다. 그리고 n높이의 문자열을 입력받아 이 문자를 w배, h배한
# 결과를 출력하자.
# 첫째 줄에 가로 배율 w, 세로 배율 h, 그리고 문자열의 높이 n이 입력된다.
# (1<= w, h <= 10, 1 <= n <= 100) 두 번째 줄부터 n+1째 줄까지 문자열이
# 입력된다. (각 행의 문자열 길이는 최대 100글자 이하)
# 문자열 입력에 공백은 입력되지 않으므로 scanf("%s", ... ); 로 처리해도
# 됩니다.
# method 1
w, h, n = map(int, input().split())
d = [] 
for i in range(n):
    d.append(list(input()))
for i in range(len(d)):
    for x in range(h):
        for j in range(len(d[i])):
            for y in range(w):
                if d[i][j] != '\0':
                    print(d[i][j], end='')
        print()