def solve(n,k):
    res1 = 1
    res2 = 1
  
    for i in range(k):
        res1 *= (n - i) 
        res2 *= (i + 1)
  
    return res1//res2

for _ in range(int(input())):
    n,k = map(int,input().split())

    if k > n :
        print(0)
        continue

    n += 1

    # a = []
    # b = []
    # c = []
    # d = []
    # e = []

    # for i in range(k+10):
    #     if n-k >= i+1:
    #         a.append(n-k-i)
    #     else:
    #         a.append(0)

    #     b.append(i+1)
    #     c.append(i)
    #     e.append(2)

    #     if k-1 >= i:
    #         d.append(max(k-1-i,1))
    #     else:
    #         d.append(0)

    # c[0] = d[0] = 1
    
    # for i in range(1,len(a)):
    #     a[i] *= a[i-1]
    #     b[i] *= b[i-1]
    #     c[i] *= c[i-1]
    #     d[i] *= d[i-1]
    #     e[i] *= e[i-1]

    # print(a)
    # print(b)
    # print(c)
    # print(d)
    # print(e)

    e = []

    e.append(2)

    for i in range(k):
        e.append(2*e[-1])

    ans = 0

    for i in range(k):
        # ans += e[i]*a[i]*d[i]/(b[i]*c[i])
        ans += e[i]*solve(n-k,i+1)*solve(k-1,i)

    print(ans%1000000007)