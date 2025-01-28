import sys
n=int(sys.stdin.readline())
time=sorted(list(map(int,sys.stdin.readline().split())))
times=[sum([time[j] for j in range(i+1)]) for i in range(n)]
print(sum(times))