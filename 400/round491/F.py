s = input()
n = int(s)
for i in range(4,11):
    if n == 10**i:
        print('10^'+str(i))
        exit()
if len(s) < 7:
    print(n)
elif len(s) == 7:
    if n%10 != 0 and int(s[:-1]) == 100000:
        print('10^6+'+str(n%10))
    elif int(s[1:]) == 0:
        print(s[0]+'*10^6')
    else:
        print(n)
elif len(s) == 8:
    if n%100 != 0 and int(s[:-2]) == 100000:
        print('10^7+'+str(n%100))
    elif int(s[1:]) == 0:
        print(s[0]+'*10^7')
    elif int(s[2:]) == 0:
        print(s[:2]+'*10^6')
    else:
        print(n)
elif len(s) == 9:
    if n%1000 != 0 and int(s[:-3]) == 100000:
        print('10^8+'+str(n%1000))
    elif int(s[1:]) == 0:
        print(s[0]+'*10^8')
    elif int(s[2:]) == 0:
        print(s[:2]+'*10^7')
    elif int(s[3:]) == 0:
        print(s[:3]+'*10^6')
    elif int(s[1:-1]) == 0:
        print(s[0]+'*10^8+'+s[-1])
    else:
        print(n)
elif len(s) == 10:
    if n%10000 != 0 and int(s[:-4]) == 100000:
        print('10^9+'+str(n%10000))
    elif int(s[1:]) == 0:
        print(s[0]+'*10^9')
    elif int(s[2:]) == 0:
        print(s[:2]+'*10^8')
    elif int(s[3:]) == 0:
        print(s[:3]+'*10^7')
    elif int(s[4:]) == 0:
        print(s[:4]+'*10^6')
    elif int(s[1:-1]) == 0:
        print(s[0]+'*10^9+'+s[-1])
    elif int(s[1:-2]) == 0:
        print(s[0]+'*10^9+'+s[-2]+s[-1])
    elif int(s[2:-1]) == 0:
        print(s[0]+s[1]+'*10^8+'+s[-1])
    else:
        print(n)