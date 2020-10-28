# Enter your code here. Read input from STDIN. Print output to STDOUT
s = str(input())
up=[]
low=[]
eve= []
odd = []
#print(len(s))
for i in range(len(s)):
    if(s[i:i+1].isupper()):
        up.append(s[i])
    elif(s[i:i+1].islower()):
        low.append(s[i])
    elif(int(s[i:i+1])%2==0):
        eve.append(s[i])
    elif(int(s[i:i+1])%2!=0):
        odd.append(s[i])
up.sort()
low.sort()
#print(low)
eve.sort()
odd.sort()
low.extend(up)
low.extend(odd)
low.extend(eve)
a=""
a = a.join(low)
print(a)