def solution(dots):
    l=len(dots)
    r=[]
    # 두 점을 이은 선분의 기울기 계산
    for i in range(l):
        for j in range(i+1,l):
            r+=[(dots[j][0]-dots[i][0])/(dots[j][1]-dots[i][1])]
    # 평행 선분 찾기 위해 매치되는 좌표의 기울기가 동일하면 카운트
    ans=[1 if r[i]==r[-1-i] else 0 for i in range(len(r)//2)]
    return max(ans)