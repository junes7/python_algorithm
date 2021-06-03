# 평가 입력받아 다르게 출력하기
# 평가를 문자로 입력받아 내용을 다르게 출력하기
# 평가 : 내용
# A : best!!!
# B : good!!
# C : run!
# D : slowly~
# 나머지 문자들 : what?
# 영문자 1개가 입력된다.
# method 1
# c = input()
# if c == 'A':
#     print('best!!!')
# elif c == 'B':
#     print('good!!')
# elif c == 'C':
#     print('run!')
# elif c == 'D':
#     print('slowly~')
# else:
#     print('what?')
# method 2
c = input()
def switch(x):
    print({'A': 'best!!!', 'B': 'good!!', 'C': 'run!', 'D': 'slowly~'}.get(x, 'what?'))
switch(c)