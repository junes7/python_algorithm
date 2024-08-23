def solution(keymap, targets):
    r=[]
    for tar in targets:
        # 문자열 작성 위해 키를 눌러야 하는 횟수 담는 변수
        s=0
        for j,c in enumerate(tar):
            t=[]
            # 휴대폰 자판 리스트를 돌면서
            for m in keymap:
                # 문자열의 문자가 휴대폰 자판에 존재할 때
                if m.find(c)!=-1:
                    # 문자가 존재하는 휴대폰 자판의 인덱스 값에 1을 더해줍니다.
                    # 파이썬 인덱스는 0부터 시작하기 때문입니다.
                    t+=[m.find(c)+1]
            # 문자가 휴대폰 자판에 존재하지 않을때
            if not len(t):
                # 키를 누른 횟수는 0으로 변수 s에 저장하고 문자열 반복문을 빠져나옵니다.
                s=0
                break
            # 동일한 문자가 두 휴대폰 자판에 존재해 인덱스 값을(키를 누른 횟수를) 두 개 가져왔을 때
            # 가장 인덱스가 작은 값(키를 누른 횟수가 작은 값)을 넣어주기 위해 min함수를 적용했습니다.
            else:
                s+=min(t)
        # 키를 누른 횟수가 없으면 -1 있으면 변수 s의 값을 결과 리스트에 넣어줍니다.
        r+=[-1 if not s else s]
    return r