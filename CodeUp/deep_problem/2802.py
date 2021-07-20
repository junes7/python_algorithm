# 달러 변환 2(dollar conversion)
# 1 달러가 k원이라고 할 때, n달러가 입력되면 몇 원 인지 출력하시오.
# k 와 n이 입력된다.(1<=k,n<=40,000) | 몇 원인지 출력한다.
# method 1
k, n = map(int, input().split())
print(k * n)