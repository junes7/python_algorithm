def solution(numLog):
    answer = ''
    c={1:'w',-1:'s',10:'d',-10:'a'}
    for i in range(1,len(numLog)):
        answer+=c[numLog[i]-numLog[i-1]]
    return answer