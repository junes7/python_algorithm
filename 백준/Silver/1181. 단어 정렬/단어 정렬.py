import sys
n=int(sys.stdin.readline())
words=list(set([sys.stdin.readline().split()[0] for i in range(n)]))
words.sort()
words.sort(key=lambda x:len(x))
for i in range(len(words)):
    print(words[i])