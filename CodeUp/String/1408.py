# 암호 처리(password processing)
# 인터넷 서비스들은 대부분 아이디와 패스워드를 이용한다. 이때 사용되는
# 패스워드는 여러 가지 방법으로 암호화되어 저장된다.
# [어떤 인터넷 서비스의 2가지 암호화 방법]
# 입력받은 문자의 ASCII 코드값 + 2
# (입력받은 문자의 ASCII 코드값 * 7) % 80 + 48
# 사용자의 패스워드를 2가지 방법으로 암호화한 결과를 출력하는 프로그램을 작성.
# method 1
pw = input()
# 첫 번째 방식으로 암호화
for i in range(len(pw)):
    n = ord(pw[i])
    print(chr(n+2), end='')
print()
# 두 번째 방식으로 암호화
for i in range(len(pw)):
    n = ord(pw[i])
    print(chr((n * 7) % 80 + 48), end='')