import math

n,h = map(int,input().split())

temp = h*(h-1)//2

if n <= temp:
    temp = int(math.sqrt(2*n))

    temp1 = temp*(temp+1)//2

    if temp1 > n:
        temp -= 1

    temp1 = temp*(temp+1)//2

    n -= temp1
    ans = temp

    if n%temp != 0:
        ans += 1

    print(ans)
else:
    ans = h-1

    temp = n + h*(h-1)//2
    temp = int(math.sqrt(temp))
    n -= h*(h-1)//2
    temp1 = temp*(temp+1) - h*(h-1)

    if temp1 > n:
        temp -= 1

    temp1 = temp*(temp+1) - h*(h-1)

    ans += 2*(temp-h+1)
    n -= temp1
    temp += 1

    if n == 0:
        print(ans)
    elif n <= temp:
        print(ans+1)
    else:
        print(ans+2)