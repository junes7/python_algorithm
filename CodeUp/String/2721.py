# 순환 문자열(rotation string)
# 영어 소문자로 구성된 단어 S1, S2, S3가 있을때, S1의 마지막 문자가
# S2의 첫 글자와 같고, S2의 마지막 글자가 S3의 첫 글자와 같고, S3의
# 마지막 글자가 S1의 첫 글자와 같으면 순환 문자열이라고 한다.
# 예를 들어 turtle error robot인 경우 순환 문자열이다.
# 세 단어가 주어졌을 때 순환 문자열이면 good을 출력, 아니면 bad를 출력
# method 1
s1 = input()
s2 = input()
s3 = input()
if s1[len(s1)-1] == s2[0] and s2[len(s2)-1] == s3[0] and s3[len(s3)-1] == s1[0]:
    print('good')
else:
    print('bad')