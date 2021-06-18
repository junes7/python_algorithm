# 3등 찾기(Find third place)
# 민준이는 뒤늦게 정보 과목의 중요성을 깨닫고 학습실에서 공부를 하고 있다.
# 기본 공부가 너무 안 되어 있어서 아주 쉬운 문제부터 어려움을 겪은 민준이는
# 친구에게 물어보려고 한다. 가장 잘 하는 친구에게 물어보기는 질문의 내용이
# 너무 부끄러워 n명의 친구들 중 정보 성적인 3번째로 높은 친구에게 묻고자 한다.
# 친구들의 성적은 모두 다르다. n명의 친구들의 이름과 정보 성적이 주어졌을 때
# 성적이 세 번째로 높은 학생의 이름을 출력하시오.
n = int(input())
sc = {}
for i in range(n):
    n, s = input().split()
    s = int(s)
    sc[n] = s
sc_value = dict(sorted(sc.items(), key=lambda x:x[1], reverse=True))
print(list(sc_value.keys())[2])