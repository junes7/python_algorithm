# 비만도 측정 O(BMI Measurement)
# 비만을 판단하기 위해서 BMI 수치가 필요하다.
# BMI 수치가 입력되면 비만을 판단하시오.
# ~10이하 정상 | ~20이하 과체중 | 20초과 비만
bmi = int(input())
if bmi <= 10:
    print('정상')
elif bmi <= 20:
    print('과체중')
else:
    print('비만')