t=int(input())
while(t>0):
    n=int(input())
    st=input()
    s1=st[0:n-1]
    s2=st[-1]
    if(s2 in s1):
        print("YES")
    else:
        print("NO")
    
    t=t-1