def solution(todo_list, finished):
    answer = [todo_list[i] for i in range(len(todo_list)) if finished[i]==False]
    return answer