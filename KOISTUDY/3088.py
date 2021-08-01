# 원하는 문자가 입력될 때까지 반복 출력하기
# print repeatedly until entering a wanted character
# 임의의 문자가 한 번에 1개씩 줄을 바꿔가며 계속 입력될 때, 영문 소문자
# q 가 아니면 입력된 문자를 그대로 출력하고, q 가 입력되면 출력을 중단.
c=''
while c!='q':
    c=input()
    print(c)