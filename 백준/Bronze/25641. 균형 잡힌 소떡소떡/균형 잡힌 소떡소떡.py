import sys
input=lambda:sys.stdin.readline().rstrip()
N = int(input())
stst = input()
lst = list(reversed(stst))  # 문자열을 뒤집음
while 1 :
    if lst.count('s') == lst.count('t') :   # 갯수 확인
        break
    else :
        lst.pop(-1) # 갯수가 다르면 맨 마지막 인덱스 pop
lst.reverse()   # 출력을 위해 다시 뒤집음
print(''.join(lst))