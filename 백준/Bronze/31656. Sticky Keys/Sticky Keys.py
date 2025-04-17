import sys
input=lambda:sys.stdin.readline().rstrip()
st=input()
arr=[st[0]]
for i in range(1,len(st)):
    if st[i]==st[i-1]:
        continue
    arr.append(st[i])
print(''.join(arr))