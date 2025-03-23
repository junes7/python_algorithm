import sys
input=lambda:sys.stdin.readline().rstrip()
vowel1=['a','e','i','o','u']
vowel2=['a','e','i','o','u','y']
st=input()
cnt1,cnt2=0,0
for c in st:
    if c in vowel1:
        cnt1+=1
    if c in vowel2:
        cnt2+=1
print(cnt1,cnt2)