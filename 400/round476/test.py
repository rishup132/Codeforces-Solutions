n,k,m,d = map(int,input().split())
l = 1
h = m

ans = 0

while l < h :
    mid = (l+h)>>1
    temp = n//mid
    temp = (temp+k-1)//k

    if temp > d:
        l = mid+1
    else:
        if ans < temp*mid:
            ans = temp*mid
        h = mid

temp = n//l
temp = (temp+k-1)//k

if ans < temp*l:
    ans = temp*l

print(l*temp)