import sys
while True:
    x=input()
    tex=list(x)
    if x=='#':
        sys.exit()
    fix=['a','e','i','o','u']
    s=0
    for i in tex:
        if i in fix:
            s=1
            break
    if s==0:
        tex.extend('ay')
        b=''.join(tex)
        print(b)
        continue
    for i in range(len(tex)):
        if tex[0] in fix:
            break
        else:
            y=tex.pop(0)
            tex.append(y)

    tex.extend('ay')
    b=''.join(tex)
    print(b)