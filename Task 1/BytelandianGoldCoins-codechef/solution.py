d={0:0,1:1,2:2,3:3,4:4,5:5,6:6,7:7,8:8,9:9,10:10,11:11}

def solve(n):
    if n in d:
        return d[n]
    else:
        d[n]=max(n,solve(n//2)+solve(n//3)+solve(n//4))
        return d[n]
t=10
while(t>0):
    n=int(input())
    print(solve(n))
    t-=1