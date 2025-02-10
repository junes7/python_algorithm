import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
k=int(input())
sensors=sorted(list(map(int,input().split())))
def min_range_sensors(n,k,sensors):
    distances=sorted([sensors[i]-sensors[i-1] for i in range(1,n)])
    result=sensors[-1]-sensors[0]
    for i in range(min(k-1,n-1)):
        result-=distances[-1-i]
    return 0 if 0 > result else result
print(min_range_sensors(n,k,sensors))