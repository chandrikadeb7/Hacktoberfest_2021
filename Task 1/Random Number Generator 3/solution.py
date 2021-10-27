A,B,C,D = map(int,input().split())

sub_numbers = []
for i in range(D):
    sub_numbers.append(input())
    
current = A
count = 0
found = False
while current <= B :
    if count == C:
        found = True
        break
    curr_str = str(current)
    for i in sub_numbers:
        if i in curr_str:
            count += 1
            break
    current += 1
 

if found:
    print(current-1)
else:
    print("DOES NOT EXIST")