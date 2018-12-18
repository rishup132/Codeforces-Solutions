s = input()
a = ['ba','ca','ac','cb']
flag = True
for i in a:
    if i in s:
        flag = False
if flag == False:
    print('NO')
else:
    x = s.count('a')
    y = s.count('b')
    z = s.count('c')

    if x > 0 and y > 0:
        if z == x:
            print('YES')
        elif z == y:
            print('YES')
        else:
            print('NO')
    else:
        print('NO')