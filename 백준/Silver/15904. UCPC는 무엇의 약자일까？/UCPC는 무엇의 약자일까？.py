import sys
input=lambda:sys.stdin.readline().rstrip()
s = input().replace(' ','')
rlt,idx = 'UCPC',0
for i in s:
    if i == rlt[idx]:
        idx+=1
    if idx==4:
        print('I love UCPC')
        break
else:
    print('I hate UCPC')