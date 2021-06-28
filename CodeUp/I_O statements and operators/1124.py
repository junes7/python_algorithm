# 분자량 구하기 1(Get molecular weight)
# 화학 숙제를 하던 광곽이는 분자량을 구하라는 문제를 보고 귀찮아 한다.
# 귀찮은 광곽이를 위햏서 화학식을 입력하면 분자량을 구해주는 프로그램을
# 만들어 주자! 화학식은 C_x H_y의 꼴로 입력된다. C의 원자량은 12, H의
# 원자량은 1로 한다.
# method 1
ch = input()
cntA, cntB = 0, 0
for i in range(len(ch)):
    if ch[i] == 'H':
        cntA = i-1
        cntB = len(ch)-1-i
sumA, sumB, b = 0, 0, 1
for i in range(cntA, 0, -1):
    sumA += b * int(ch[i])
    b *= 10
b = 1
for j in range(len(ch)-1, len(ch)-1-cntB, -1):
    sumB += b * int(ch[j])
    b *= 10
sumT = 12 * sumA + 1 * sumB
print(sumT)