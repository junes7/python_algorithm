# 2-gram
# use list index
n=input()
for i in range(len(n)-1):
    print(n[i:i+2])
# use sep option
for i in range(len(n)-1):
    print(n[i], n[i+1], sep='')
