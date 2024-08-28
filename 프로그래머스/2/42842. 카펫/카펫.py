def solution(brown, yellow):
    answer = []
    total = brown + yellow
    for col in range(3, total+1):
        row = total//col
        if row * col == total and row >= col and (row-2) * (col-2) == yellow:
            answer.append(row)
            answer.append(col)
            break
    return answer