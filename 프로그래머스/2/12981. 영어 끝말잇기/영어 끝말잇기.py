def solution(n, words):
    # 결과 배열과 사용되었던 단어 저장 배열 변수 생성
    r,used=[],[]
    # 끝말잇기 단어 리스트를 돌면서
    for i,word in enumerate(words):
        # 사용된 단어가 없으면(시작 단계면) used 배열에 저장
        if not len(used):
            used+=[word]
        # 시작 단계 아니라면
        else:
            # 현재 단어가 사용된 단어 리스트에 없을 때
            if word not in used:
                # 이전 단어 끝이 현재 단어 시작 문자와 일치할 때
                if used[-1][-1]==word[0]:
                    # used 배열에 저장
                    used+=[word]
                # 이전 단어 끝이 현재 시작 문자와 일치하지 않는다면
                else:
                    # 탈락하는 사람 번호와 몇 번째 탈락했는지 결과 배열에 기록하고 break으로 루프 빠져나옵니다.
                    r+=[i%n+1,i//n+1]
                    break
            # 현재 단어가 사용된 단어 리스트에 있다면
            else:
                # 탈락하는 사람 번호와 몇 번째 탈락했는지 결과 배열에 기록하고 break으로 루프 빠져나옵니다.
                r+=[i%n+1,i//n+1]
                break
    # 탈락자가 생기지 않았다면 0,0을 배열에 넣어주고 반환해줍니다.
    if not len(r):
        r+=[0,0]
    return r