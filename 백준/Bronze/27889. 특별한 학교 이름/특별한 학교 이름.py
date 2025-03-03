import sys
input=lambda:sys.stdin.readline().rstrip()
abbrev={"NLCS":"North London Collegiate School","BHA":"Branksome Hall Asia",
"KIS":"Korea International School","SJA":"St. Johnsbury Academy"}
print(abbrev[input()])