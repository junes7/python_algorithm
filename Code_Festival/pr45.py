# time함수 사용해 현재 년도 구하기
# get current year with time function
import time
t=time.time()
t=int(t//(3600*24*365))+1970
print(t)