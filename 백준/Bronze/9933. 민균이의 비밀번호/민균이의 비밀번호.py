import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
words=[input() for _ in range(n)]
for i in range(n):
    for j in range(i,n):
        if words[i][::-1]==words[j]:
            print(len(words[i]),words[i][len(words[i])//2])
            break