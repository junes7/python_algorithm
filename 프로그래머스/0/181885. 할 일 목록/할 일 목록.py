def solution(todo_list, finished):
    # method1
    answer=[todo_list[i] for i in range(len(todo_list)) if finished[i]==False]
    # method2
    # answer=[c for i,c in enumerate(todo_list) if not finished[i]]
    return answer