import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
flag=True
arr=["Never gonna give you up","Never gonna let you down","Never gonna run around and desert you","Never gonna make you cry","Never gonna say goodbye","Never gonna tell a lie and hurt you","Never gonna stop"]
for _ in range(n):
    if input() not in arr:
        flag=False
        break
print("Yes" if not flag else "No")