def solve(P,a,b,c,x,y):
    costA = b + (x*a) # max Anars possible
    costB = c + (y*a) # max Chakris possible
    
    # return maximum possible outcome.
    if costA >= costB: 
        return P//costB
    return P//costA

# Driver code
for _ in range(int(input())):
    P,a,b,c,x,y = map(int, input().split())
    print(solve(P,a,b,c,x,y))