# 평가 입력받아 다르게 출력하기
# print evaluation as different type
# 평가를 문자(A, B, C, D, ...)로 입력받아 내용을 다르게 출력해보자.
# 평가 : 내용
# A : best!!!
# B : good!!
# C : run!
# D : slowly~
# 나머지 문자들 : what?
s=input()
if s=='A':
    t='best!!!'
elif s=='B':
    t='good!!'
elif s=='C':
    t='run!'
else:
    t='slowly~' if s=='D' else 'what?'
print(t)