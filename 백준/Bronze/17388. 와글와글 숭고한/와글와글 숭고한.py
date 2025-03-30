import sys
input=lambda:sys.stdin.readline().rstrip()
arr=[*map(int,input().split())]
univ=["Soongsil","Korea","Hanyang"]
print("OK" if sum(arr)>=100 else univ[arr.index(min(arr))])