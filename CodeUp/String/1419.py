# love 2(print I love you when the input word is love)
# 영어 문장이 입력된다. 그 문장에서 love 가 몇 번 나오는지 출력하시오.
# method 1
s = input()
cnt = 0
for i in range(len(s)-3):
    if s[i] == 'l' and s[i+1] == 'o' and s[i+2] == 'v' and s[i+3] == 'e':
        cnt += 1
print(cnt)