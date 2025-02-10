import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
s=[input() for _ in range(n)]
words={}
for c in s:
    x=len(c)-1
    for i in c:
        words[i]=words[i]+10**x if i in words else 10**x
        x-=1
words_sort=sorted(words.values(),reverse=True)
result,num=0,9
for k in words_sort:
    result+=k*num
    num-=1
print(result)