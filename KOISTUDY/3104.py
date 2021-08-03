# 이상한 출석 번호 부르기 3
# strange attendance number call
# 정보 선생님은 오늘도 이상한 출석을 부른다. 영일이는 오늘도 다른 생각을
# 해보았다. 출석 번호를 다 부르지는 않은 것 같은데? ... 가장 빠른 앞 번호가
# 뭐였을까? 아무렇게나 부른 n번의 출석 번호가 주어질 때, 가장 빠른 앞 번호를
# 찾아 출력해 보자.
# 하지만, 첫 번째 번호와 마지막 번호가 몇 번인지는 아무도 모른다.
# 음수(-) 번호, 0번 번호도 있을 수 있다.
n=int(input())
d=list(map(int,input().split()))
m=d[0]
for i in range(1,n):
    if m>d[i]:
        m=d[i]
print(m)
# d.sort()
# print(d[0])