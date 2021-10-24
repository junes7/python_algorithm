# part time job of Hojun 호준이의 아르바이트
# 학생 수는 4명 이상입니다.
# 숫자 외에 다른 값은 입력되지 않습니다.
print('점수입력: ',end='')
# method 1
num=input().split()
num=[int(i) for i in num]
num_set=set(num)
count=0
if len(num_set)<=3:
    count=len(num)
else:
    break_pt=sorted(list(num_set), reverse=True)[3]
    num=sorted(num, reverse=True)
    for i in num:
        if break_pt==i:
            break
        else:
            count+=1
print('출력:',count)