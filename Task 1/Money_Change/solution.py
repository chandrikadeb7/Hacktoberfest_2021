x=int(input())
count=0

if(x>0):
    a=x/10
    x=x%10
    count+=int(a)

if(x>0):
    a=x/5
    x=x%5
    count+=int(a)

count+=int(x)
print(count)


