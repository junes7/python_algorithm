import sys
input=lambda:sys.stdin.readline().rstrip()
left_stack,right_stack=list(input()),[]
for _ in range(int(input())):
    command=input()
    if command=="L":
        if left_stack:
            right_stack.append(left_stack.pop())
    elif command=="D":
        if right_stack:
            left_stack.append(right_stack.pop())
    elif command=="B":
        if left_stack:
            left_stack.pop()
    elif command.startswith("P"):
        _,char=command.split()
        left_stack.append(char)
sys.stdout.write(''.join(left_stack+right_stack[::-1]))