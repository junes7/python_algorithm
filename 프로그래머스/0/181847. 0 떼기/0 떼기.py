def solution(n_str):
    answer=n_str[[i for i in range(len(n_str)) if n_str[i]!='0'][0]:]
    return answer