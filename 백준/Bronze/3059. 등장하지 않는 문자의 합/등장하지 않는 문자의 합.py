import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    st,rlt=input(),0
    for i in range(26):
        if chr(i+65) in st:
            continue
        else:
            rlt+=i+65
    print(rlt)