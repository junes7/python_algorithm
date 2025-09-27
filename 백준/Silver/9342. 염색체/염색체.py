import re
t = int(input())
a = re.compile('^[A-F]?A+F+C+[A-F]?$')
for _ in range(t):
	test = input()
	if a.match(test)==None:
		print('Good')
	else:
		print('Infected!')