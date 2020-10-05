# cook your dish here
def digisum(a):
    s=0
    while a>0:
        s=s+int(a%10)
        a=int(a/10)
    return s
        
try:
    t=int(input())
    for i in range(t):
        a=0
        b=0
        n=int(input())
        for j in range(n):
            x,y=input().split()
            y=int(y)
            x=int(x)
            if x>9:
                x=digisum(x)
            if y>9:
                y=digisum(y)
            if x>y:
                a=a+1
            elif x==y:
                a=a+1
                b=b+1
            else:
                b=b+1
        if a>b:
            print("0",a)
        elif a<b:
            print("1",b)
        else:
            print("2",a)
except Exception as e:
    pass
    
