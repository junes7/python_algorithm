import sys
input=lambda:sys.stdin.readline().rstrip()
for _ in range(int(input())):
    a,b=input().split()
    x=sorted(list(a))
    y=sorted(list(b))
    if x==y:
        print("%s & %s are anagrams." % (a,b))
    else:
        print("%s & %s are NOT anagrams." % (a,b))