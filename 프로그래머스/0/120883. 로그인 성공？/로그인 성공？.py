def solution(id_pw, db):
    answer='fail'
    for d in db:
        if id_pw[0] in d:
            answer='login' if id_pw[1] in d else 'wrong pw'
    return answer