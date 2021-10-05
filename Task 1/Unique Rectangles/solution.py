

def count_unique_rectangle(n):
    count=0
    for i in range(1, int(n**0.5) +1):
        height = i
        while (height*i) <=n:
            count +=1
            height+=1
    return count

print(count_unique_rectangle(int(input())))