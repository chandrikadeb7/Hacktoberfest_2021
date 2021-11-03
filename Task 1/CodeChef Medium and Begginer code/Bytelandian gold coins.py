coin=[12,2,5,4,6,9,7]
for i in coin:
    c1=int(i/2);c2=int(i/3);c3=int(i/4)
    summ=c1+c2+c3
    if summ > i:
        print(summ)
    else:
        print(i)