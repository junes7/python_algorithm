# find the day of the week 요일 구하기
import datetime
m=int(input())
d=int(input())
day=['MON','TUE','WED','THU','FRI','SAT','SUN']
print(day[datetime.date(2021,m,d).weekday()])