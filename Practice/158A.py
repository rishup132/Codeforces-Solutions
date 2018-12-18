a,b = map(int,input().split())

s = list(map(int,input().split()))

i = 0
count = 0

while i < a :
	if (s[i] >= s[b-1]) and (s[i] > 0) :
		count += 1
	i += 1

print(count)