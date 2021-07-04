# 비밀 전화번호(secret phone number)
# 코드업 초등학교에 재학중인 명철이는 친구들과 함께 비밀방범대를 만들었다. 그래서
# 서로 연락처를 공유하던 중, 명철이는 연락처가 새어나가지 않도록 암호로 바꿔서
# 공유하기로 했다. 여기서 암호를 해독하는 방법은 다음과 같다.
# 0 1 2 3 4 5 6 7 8 9
# l o h c g p d a b k
# 첫 번째 줄에 코드표 문자 10개가 주어진다. (순서대로 0~9이다. 알파벳 소문자만
# 입력됨, 중복X) 두 번째 줄에 암호화된 전화번호 3블럭이 띄워쓰기로 구분되어 입력
# method 1
s = input()
d = input()
for i in range(len(d)):
    if d[i] == ' ':
        print(' ', end='')
    else:
        for j in range(len(s)):
            if d[i] == s[j]:
                print(j, end='')