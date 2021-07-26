# 정올 참여 학생 리스트 만들기 2(create JUNGOL participation student list)
# 세종이는 이번 주말에도 정보 과학실에서 정보 올림피아드 준비를 하려고 한다.
# JH 선생님은 정보 과학실 사용 조건으로 정보 올림피아드 참가 학생 명단을 작성하는
# 프로그램을 작성하라고 하셨다. 짖굳은 JH 선생님은 난이도를 높여 입력 데이터를
# 만들 때 일부러 중간에 잘못된 값을 더 많이 끼워 넣었다. 그리고 잘못된 데이터를
# 제거하는 방법을 설명해 주었다. 다음 조건에 따라 프로그램을 만들고 올바른 명단만
# 출력해 보자.
# 첫째 줄에 입력 데이터의 개수 n이 입력된다. (10<=n<=20,000)
# 둘째 줄부터 n+1번째 줄까지 처리 코드c(문자 1자리), 수험 번호 
# no(1<=no<=1,000,000,000), 이름(10바이트 이내)이 입력된다.
# 처리 코드에 따라 입력 데이터를 메모리에 저장하거나 삭제해야 한다. 처리 코드가
# 'I'이면 데이터를 수험 번호 순서에 맞게 삽입한다. 만약 입력할 때 이미 수험 번호가
# 입력되어 있다면 같은 수험 번호의 맨 앞에 삽입한다. 처리 코드가 ‘D’이면 메모리의
# 해당 수험 번호의 데이터 중에서 가장 앞쪽 데이터를 찾아 삭제한다. 만약 처리 코드가
# 'D'이고 해당 수험 번호가 존재하지 않으면 아무 작업도 하지 않는다. 마지막으로
# n+2번째 줄에 올바른 데이터의 위치를 나타내는 정수 5개가 입력된다.
# 메모리에 저장된 데이터 중에서 올바른 데이터 위치에 있는 값의 명단을 출력한다.
# method 1
n = int(input())
mt = []
for i in range(n):
    c, no, name = input().split()
    no = int(no)
    if c == 'I':
        if len(mt) < 1:
            mt.append([no, name])
        else:
            mt.append([no, name])
            for i in range(1, len(mt)):
                if i < len(mt) and mt[i-1][0] == mt[i][0]:
                    mt[i-1].insert(1, mt[i][1])
                    del mt[i]
    elif c == 'D':
        for i in range(len(mt)):
            if i <len(mt) and mt[i][0] == no:
                del mt[i][1]
                if len(mt[i]) == 1:
                    del mt[i]
mt = sorted(mt, key=lambda x : x[0])
a, b, c, d, e = map(int, input().split())
idx = [a, b, c, d, e]
for i in range(len(idx)):
    for j in range(len(mt)):
        if j+1 == idx[i]:
            print(mt[j][0], mt[j][1])
            break