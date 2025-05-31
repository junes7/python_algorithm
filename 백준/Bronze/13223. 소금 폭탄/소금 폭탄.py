import sys
input=lambda:sys.stdin.readline().strip()
h1,m1,s1=map(int,input().split(':'))
h2,m2,s2=map(int,input().split(':'))
t1=h1*3600+m1*60+s1
t2=h2*3600+m2*60+s2
if t1>=t2: t2+=60*60*24
t=t2-t1
h3,m3,s3=t//3600,(t%3600)//60,t%60
print("%02d:%02d:%02d" % (h3,m3,s3))