a,b,c = map(int, input().split())

d = int(a/c)
e = int(b/c)

if(a%c != 0):
	d += 1

if(b%c != 0):
	e += 1

print(d*e)
	