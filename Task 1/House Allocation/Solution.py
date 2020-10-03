def sale(list1,budget):
    c=0
    s=0
    for i in list1:
        s=s+i
        if s<=budget:
            c=c+1
        else:
            s=s-i
    return c
            
t=int(input())
for i in range(t):
    n,b=input().split()
    n=int(n)
    b=int(b)
    list1=list(map(int, input(). split()))
    list1.sort()
    print("Case #{}: {}".format(i+1,sale(list1,b)))

