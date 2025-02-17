import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
def generate_permutations(n):
    numbers=list(range(1,n+1))
    used=[False]*n
    current=[]
    def backtrack():
        if len(current)==n:
            print(*(current))
            return
        for i in range(n):
            if not used[i]:
                used[i]=True
                current.append(numbers[i])
                backtrack()
                current.pop()
                used[i]=False
    backtrack()
generate_permutations(n)