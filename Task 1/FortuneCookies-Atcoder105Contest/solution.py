li= list(map(int,input().split(" ")))
a=li[0]
b=li[1]
c=li[2]
d=li[3]
flag=0
if(a==(b+c+d)):
  flag=1
elif(b==(a+c+d)):
  flag=1
elif(c==(a+b+d)):
  flag=1
elif(d == (a+b+c)):
  flag=1
elif((a+b) == (c+d)):
  flag=1
elif((a+c) == (b+d)):
  flag=1
elif((a+d) == (b+c)):
  flag=1
if(flag ==1):
  print("Yes")
else:
  print("No")