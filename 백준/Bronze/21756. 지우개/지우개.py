import sys
input=lambda:sys.stdin.readline().rstrip()
n = int(input())
lst = [i for i in range(1, n+1)]
while len(lst) > 1:
    new_lst = []
    for i in range(1, len(lst), 2):
        new_lst.append(lst[i])
    lst = new_lst
print(lst[0])