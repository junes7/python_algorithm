import sys
input=lambda:sys.stdin.readline().rstrip()
n=int(input())
for _ in range(n):
    data_set=[]
    sub_cnt=int(input())
    verb_cnt=int(input())
    obj_cnt=int(input())
    subs=[input() for _ in range(sub_cnt)]
    verbs=[input() for _ in range(verb_cnt)]
    objs=[input() for _ in range(obj_cnt)]
    for sub in subs:
        for verb in verbs:
            for obj in objs:
                data_set+=[sub+' '+verb+' '+obj+'.']
    print(*data_set,sep="\n")
    print()