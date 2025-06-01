import sys
input=lambda:sys.stdin.readline().rstrip()
dic={'-':0,'\\':1,'(':2,'@':3,'?':4,'>':5,'&':6,'%':7,'/':-1}
while 1:
    st=input()
    if st=='#': break
    rlt=0
    for i in range(len(st)):
        rlt+=dic[st[i]]*8**(len(st)-1-i)
    print(rlt)