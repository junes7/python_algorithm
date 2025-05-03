import sys
input=lambda:sys.stdin.readline().rstrip()
for i in range(int(input())):
    n=input()
    total=str(int(n)+int(n[::-1]))
    flag=True
    for i in range(len(total)//2):
        if total[i]!=total[len(total)-1-i]:
            flag=False
            break
    print("YES" if flag else "NO")