def solution(n_str):
    # method1
    # answer=n_str[[i for i in range(len(n_str)) if n_str[i]!='0'][0]:]
    # method2
    answer=n_str.lstrip('0')
    return answer