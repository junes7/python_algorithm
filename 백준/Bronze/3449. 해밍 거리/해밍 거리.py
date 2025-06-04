import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    x,y=input(),input()
    cnt=0
    for i in range(len(x)):
        if x[i]!=y[i]:
            cnt+=1
    print("Hamming distance is %d." % cnt)