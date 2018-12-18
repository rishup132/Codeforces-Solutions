n,m,l,k = map(int,input().split())

l = int(1)
h = int(1e18)
ans = int(1)

while l <= h:
    mid = (l+h)//2

    #print(l,h)

    f1 = True

    if mid*m > n or mid*m - k < l:
        f1 = False

    if not f1:
        h = mid - 1
        ans = mid
    else:
        l = mid + 1

if ans*m > n or ans*m-k < l:
    print(-1)
else:
    print(ans)