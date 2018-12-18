a, b, x = [int(i) for i in input().split()]

odd = ""
if x % 2 == 0:
    for i in range(x//2):
        odd += "01"
        a -= 1
        b -= 1

    if b > 0:
        print("1" * b + "0" * a + odd)
    elif b == 0:
        print(odd + "0" * a)
else:
    for i in range((x+1)//2):
        odd += "01"
        a -= 1
        b -= 1
    print("0" * a + odd + "1" * b)
    
        
        