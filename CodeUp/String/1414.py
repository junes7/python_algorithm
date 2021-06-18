# C언어를 찾아라.(find C language)
# 길이가 100 이하인 문자열로 구성된 암호문을 발견했다. 이 문자열에서 "C"라는
# 문자와 "CC"라는 문자가 몇 개 있는지 조사하고자 한다. 길이가 100 이하의
# 문자열을 입력받아, "C"라는 문자와 "CC"라는 문자가 각각 몇 개 존재하는지
# 알아내는 프로그램 작성.(단, C, CC는 대소문자 구분하지 않는다. "cC"=="CC")
# method 1
pw = input()
cnt = 0
for i in range(len(pw)):
    if pw[i] == 'C' or pw[i] == 'c':
        cnt += 1
print(cnt)
cnt = 0
for i in range(len(pw)-1):
    if (pw[i] == 'C' or pw[i] == 'c') and (pw[i+1] == 'C' or pw[i+1] == 'c'):
        cnt += 1
print(cnt)