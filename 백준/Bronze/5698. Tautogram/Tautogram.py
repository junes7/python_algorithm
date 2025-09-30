while True:
    line = list(input().lower().split())
    if line[0] == "*":
        break
    first = line[0][0]
    flag = True
    for el in line[1:]:
        if first != el[0]:
            flag = False
            break
    print("Y" if flag else "N")