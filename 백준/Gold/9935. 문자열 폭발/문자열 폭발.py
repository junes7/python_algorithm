import sys
input=lambda:sys.stdin.readline().rstrip()
s=input()
bomb=input()
stack,l=[],len(bomb)
for char in s:
    stack+=[char]
    if stack[-l:]==list(bomb):
        for _ in range(l):
            stack.pop()
print(''.join(stack) if stack else "FRULA")