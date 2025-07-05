import sys
input=lambda:sys.stdin.readline().rstrip()
n,m=map(int,input().split())
p_list,e_list=[],[]
for _ in range(m):
    pack,each=map(int,input().split())
    p_list.append(pack)
    e_list.append(each)
min_p,min_e=min(p_list),min(e_list)
if min_p>=min_e*6:
    print(min_e*n)
else:
    if min_p<min_e*(n%6):
        print(min_p*(n//6+1))
    else:
        print(min_p*(n//6)+min_e*(n%6))