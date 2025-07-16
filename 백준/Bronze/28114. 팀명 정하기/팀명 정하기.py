import sys
input=lambda:sys.stdin.readline().rstrip()
arr,abbrev,yr=[],"",[]
for _ in range(3):
    a,b,c=input().split()
    yr+=[str(int(b)%100)]
    arr+=[[int(a),c[0]]]
arr.sort(key=lambda x:-x[0])
yr.sort()
for c in arr:
    abbrev+=c[1]
print(''.join(yr),abbrev,sep="\n")