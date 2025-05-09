import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[input() for _ in range(int(input()))]
def sum_arr(st):
    total=0
    for c in st:
        if c.isdigit():
            total+=int(c)
    return total
arr.sort(key=lambda x:(len(x),sum_arr(x),x))
print(*arr,sep="\n")