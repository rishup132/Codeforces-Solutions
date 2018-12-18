n = int(input())

while n > 0 :
	s = input()
	temp = len(s) - 2
	if temp > 8 :
		print(s[0] + str(temp) + s[-1])
	else :
		print(s)
	n -= 1
	
