x, y = map(float, input().split())
ans = 0.0
if (x % 5==0) and (x+0.5)<=y and y>=0 and x>=0:
    ans = y - x - 0.5
else:
    print(y)