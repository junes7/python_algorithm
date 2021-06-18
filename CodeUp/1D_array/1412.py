# 알파벳 개수 출력하기(print alphabet count)
# 영어 공부에 빠져 있는 주현이는 영어 책을 자주 본다. 어느 날 영어 문장을
# 보면서 어떤 알파벳 문자가 많이 사용되는지 궁금해졌다. 영어 문장이 주어지면
# a부터 z까지 알파벳 문자가 각각 몇 번 나왔는지 출력하는 프로그램을 작성하시오.
# 1. 90글자 이내의 영어로 된 문장이 입력된다.
# 2. 이 문장은 영어 소문자, 공백 및 특수 문자로만 이루어져 있다.
# a부터 z까지 사용된 알파벳 개수를 [입출력 예시]를 참고하여 출력한다. 특수
# 문자와 공백의 개수는 출력하지 않는다.
# method 1
s = input()
# 출력용 딕셔너리 문자 배열 생성
al = {}
for i in range(97, 123):
    al[chr(i)] = 0
for i in range(len(s)):
    key = s[i]
    if key in al.keys():
        al[key] += 1
for key, value in al.items():
    print("%s:%d" % (key, value))