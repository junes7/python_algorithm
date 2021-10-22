# 함께 문제 푸는 날
# the day that we solve problems together 
# 프로그래밍 언어 기초 100제 시리즈는 ... 프로그래밍 언어에 대한 기초가
# 없는 어느 누구라도 ~ 주어진 문제들을 읽고, 예시 코드들을 보고, 읽고,
# 생각하고, 작성하고, 제출하는 여러 번의 시행착오 과정을 통해 자신의
# 생각을 구체적이며 정확하게 프로그래밍 언어로 작성할 수 있는 능력을 매우
# 빠른 시간 내에 키울 수 있도록 설계되었다.
# 온라인 채점시스템으로 제출되는 채점들은 채점기록 메뉴를 통해 살펴볼 수
# 있다. 같은 날 처음 문제를 풀기 시작한 3명의 친구들이
# 채점시스템에 들어와서 문제를 푸는 날짜 간격이 매우 규칙적이라고 할 때,
# 다시 함께 모두 들어와 함께 문제를 풀게 되는 날의 날짜 간격은 얼마일까?
# 예를 들어, 3명이 같은 날 처음 들어온 후, 이후 각각 3일째 마다, 7일째
# 마다, 9일째 마다 한 번씩 들어와서 문제를 푼다면, 처음 들어온 날 이후
# 63일째 마다 3명이 함께 문제를 풀게 된다.
# 수학에서 배운 최소 공배수를 생각한 사람들도 있을 것이다. 하지만,
# 정보에서 배우고 경험하는 문제해결 프로그래밍의 세상은 컴퓨터의 힘을 빌려
# 간단한 방법으로 해결할 수 있게 해준다.
# 아래의 코드를 읽고, 이해한 후 도전해보자.
# d는 날 수, a/b/c는 세 친구의 방문 주기이다.
# d = 1
# while d%a!=0 or d%b!=0 or d%c!=0 :
# d += 1
# print(d)
# 이외의 다양한 방법이 있을 수 있다. 정보의 문제해결에 있어서 정답은?
# 주어진 시간과 제약 조건 이내에 정확한 결과를 얻을 수 있는 모든 방법이다.
# 따라서 새로운, 더 빠른, 더 간단한 방법을 다양하게 생각해 보고 도전해.
a,b,c=map(int,input().split())
d=1
while d%a!=0 or d%b!=0 or d%c!=0:
    d+=1
print(d)