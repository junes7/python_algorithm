import sys
input=lambda:sys.stdin.readline().rstrip()
arr1=[*map(int,input().split())]
arr2=[*map(int,input().split())]
sc=[13,7,5,3,3,2]
s1,s2=0,0
for i in range(6):
    s1+=arr1[i]*sc[i]
    s2+=arr2[i]*sc[i]
print("cocjr0208"if s1>s2+1.5 else "ekwoo")