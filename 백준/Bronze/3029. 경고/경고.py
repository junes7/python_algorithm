import sys
input=lambda:sys.stdin.readline().rstrip()
h1,m1,s1=map(int,input().split(':'))
h2,m2,s2=map(int,input().split(':'))
time=(h2-h1)*3600+(m2-m1)*60+(s2-s1)
if time<=0:
    time+=60*60*24
print("%02d:%02d:%02d" % (time/3600,(time%3600)/60,(time%3600)%60))