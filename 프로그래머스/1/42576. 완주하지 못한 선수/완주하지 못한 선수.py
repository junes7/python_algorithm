def solution(participant, completion):
    r=''
    participant.sort()
    completion.sort()
    for i in range(len(completion)):
        if completion[i] != participant[i]:
            r+=participant[i]
            break
    if r=='':
        r+=participant[len(participant)-1]
    return r