# 주민등록번호 입력받아 형태 바꿔 출력하기
# (print social security number with different type)
# 주민등록번호는 다음과 같이 구성된다. XXXXXX-XXXXXXX
# 왼쪽 6자리는 생년월일(YYMMDD)이고, 오른쪽 7자리는 성별,출생지역,등록순서,
# 확인코드로 암호화 되어 있다.
# (*YY는 2자리 연도, MM은 2자리 월, DD는 2자리 일을 의미한다.)
# 주민등록번호를 입력받아 형태를 바꿔 출력해 보자.
import sys
input = sys.stdin.readline
ssn1, ssn2 = map(int, input().split('-'))
print('%06d' % ssn1, '%07d' % ssn2, sep='')