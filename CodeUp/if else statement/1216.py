# 컨설팅 회사(consulting company)
# 대영이는 SNS를 이용한 컨설팅 회사를 운영하고 있다.
# 이 회상에서 획기적인 기획안을 개발해 사람들에게
# 홍보하려고 한다. 홍보를 할 경우 수입과 그렇지 않을
# 경우의 수입을 알고 있을 경우, 홍보가 유리한가,
# 홍보를 하지 않는 경우가 유리한가, 아니면 홍보를
# 하든 안하든 별 관계가 없는지 알아내는 프로그램 작성
bwop, bwp, pp = map(int, input().split())
bwp -= pp
if bwp > bwop:
    print('advertise')
elif bwp < bwop:
    print('do not advertise')
else:
    print('does not matter')