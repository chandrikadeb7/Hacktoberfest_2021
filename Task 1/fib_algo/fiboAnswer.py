# Function for nth Fibonacci number
 
def Fibo(n):
    if n<=0:
        print("bad input")
    elif n==1:
        return 0
    elif n==2:
        return 1
    else:
        return Fibo(n-1)+Fibo(n-2)
 
 
print(Fibo(6))