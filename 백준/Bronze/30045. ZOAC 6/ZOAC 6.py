import sys
input=lambda:sys.stdin.readline().rstrip()
cnt=0
for _ in range(int(input())):
    st=input()
    if '01' in st or 'OI' in st:
        cnt+=1 
print(cnt)