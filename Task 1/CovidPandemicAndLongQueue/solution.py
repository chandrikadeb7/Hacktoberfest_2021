t=int(input())
while(t>0):
    n=int(input())
    l=list(map(int,input().split()))
    if(n == 1):
        print("YES")
    else:
        i=0
        while(i<n):
            if(l[i] == 0 and (i<(n-1))):
                i=i+1
                continue
            elif(l[i] == 0 and (i == (n-1))):
                print("YES")
                break
            elif(l[i] == 1 and ((n-i-1)>6)):
                nl=l[i+1:i+7]
                c=nl.count(1)
                if (c==0):
                    i=i+6
                    continue
                elif(c==1 and nl[-1] == 1):
                    i=i+6
                    continue
                else:
                    print("NO")
                    break
            elif(l[i] == 1 and ((n-i-1) == 6)):
                nl=l[i+1:i+7]
                c=nl.count(1)
                if(c == 0):
                    print("YES")
                    break
                elif(c==1 and nl[-1] == 1):
                    print("YES")
                    break
                else:
                    print("NO")
                break
            elif(l[i] ==1 and ((n-i-1)<6) and ((n-i-1)>0)):
                nl=l[i+1:]
                c=nl.count(1)
                if(c>0):
                    print("NO")
                else:
                    print("YES")
                break
            elif(l[i] ==1 and ((n-i-1) == 0)):
                print("YES")
                break
    t=t-1