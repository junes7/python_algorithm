import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    st,alpha=input(),{}
    for c in st:
        if c.isalpha():
            if c in alpha:
                alpha[c]+=1
            else:
                alpha[c]=1
    alpha_sort=sorted(alpha.items(),key=lambda x:(-x[1]))
    print("?" if len(alpha_sort)>1 and alpha_sort[1][1]==alpha_sort[0][1] else alpha_sort[0][0])