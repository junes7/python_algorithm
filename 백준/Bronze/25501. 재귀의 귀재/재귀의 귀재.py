import sys
input=lambda:sys.stdin.readline().rstrip()
def recursion(s, l, r, cnt):
    if l >= r: return [1, cnt]
    elif s[l] != s[r]: return [0, cnt]
    else: return recursion(s, l+1, r-1, cnt+1)
def isPalindrome(s,cnt):
    return recursion(s, 0, len(s)-1,cnt)
for _ in range(int(input())):
    s=input()
    print(*isPalindrome(s,1))