# I.O.I
# 정보 선생님은 프로젝트 걸그룹 IOI를 매우 싫어한다. 국제정보올림피아드
# (International Olympiad in Informatics:IOI)의 이름과 동일해서, 인터넷
# 검색창에 IOI를 입력할 경우 더 이상 국제정보올림피아드에 대한 정보를 찾기가
# 힘들어 졌기 때문이다. 입력으로 IOI가 입력될 때,'IOI is the International
# Olympiad in Informatics.'를 출력하는 프로그램을 작성. 만약 IOI가 아닌
# 다른 글자가 들어오는 경우, 'I don't care.'를 출력한다.
# method 1
s = input()
if len(s) == 3:
    for i in range(len(s)-2):
        if s[i] == 'I' and s[i+1] == 'O' and s[i+2] == 'I':
            print("IOI is the International Olympiad in Informatics.")
        else:
            print("I don't care.")
else:
    print("I don't care.")