import sys
input=lambda:sys.stdin.readline().rstrip()
word1,word2=input().split()
l1,l2,idx=len(word1),len(word2),[0]*2
rlt=[['.']*l1 for _ in range(l2)]
for i in range(l1):
    if word1[i] in word2:
        idx[0]=i
        idx[1]=word2.index(word1[i])
        break
for i in range(l2):
    rlt[i][idx[0]]=word2[i]
for i in range(l1):
    rlt[idx[1]][i]=word1[i]
for c in rlt:
    print(''.join(c))