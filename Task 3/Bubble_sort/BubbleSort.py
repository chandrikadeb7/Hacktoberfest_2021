def BubbleSort(list):
  for i in range(len(list)-1):
    for j in range(len(list)- i - 1):
      if (list[j]>list[j+1]):
        list[j+1]+=list[j]
        list[j]= list[j+1]-list[j]
        list[j+1] = list[j+1]-list[j]
string = input("Enter elements to be sorted separated by space")
list = string.split()

for i in range(len(list)):
  list[i] = int(list[i])
BubbleSort(list)

print("Sorted list by bubble sort is :" ,list)
