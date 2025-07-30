import sys
input=lambda:sys.stdin.readline().rstrip()
mbti=['E','I','S','N','T','F','J','P']
st=input()
for c in st:
    mbti.remove(c)
print(''.join(mbti))