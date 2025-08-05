import sys
input=lambda:sys.stdin.readline().rstrip()
n,st=int(input()),input()
cnt=[st.count("security"),st.count("bigdata")]
print("bigdata? security!" if cnt[0]==cnt[1] else "security!" if cnt[0]>cnt[1] else "bigdata?")