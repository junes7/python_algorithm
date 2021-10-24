# 오타 수정하기 (Correcting typos)
# 문장이 입력되면 모든 q를 e로, b를 n으로 바꾸는
# 프로그램을 작성
print('입력: ',end='')
n=input()
print('출력:',n.replace('q','e').replace('b','n'))