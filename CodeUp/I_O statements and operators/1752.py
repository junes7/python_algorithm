# 뒤집어 출력하기(print string in reverse order)
# 20글자 이하의 한 단어가 입력되면 뒤집어 출력하시오.
# method 1
s = input()
for i in range(len(s)-1, -1, -1):
    print(s[i], end='')