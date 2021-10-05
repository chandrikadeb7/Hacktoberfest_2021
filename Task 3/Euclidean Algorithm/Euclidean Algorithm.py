# Euclidean Algorithm is used to find the GCD of two, or more number. And its Time Complexity is O(log(min(a,b))) & Space Complexity is O(1).

# GCD Function
def GCD(abs(a), abs(b)):              # abs is absolute because for negative numbers gcd will be absolute value, so make it absolute 
  if b == 0:                          # If b = 0, it is the termination step for the recursion 
    return a
  
  return GCD(b, a%b)                  # Keep on dividing the number till it become 0
# Program to find GCD of two numbers:

# Take two numbers a & b

a,b = 25, 800  

# Call for GCD function & store the result

result = GCD(a, b)

print(result)


# Program to find GCD for multiple numbers:

# Take array of numbers

arr = [20, 5, 15, 10, 100, 65]

result = arr[0]                   # Store a number, which helps in calling the GCD in loop.

# Call GCD inside a for loop

for (i = 1; i < len(arr); ++i):
  resut = GCD(result, arr[i])    # Call the GCD function, where it takes two parameters, a = result & b = arr[i](ith element), 
                                 # it call & store the result, then call GCD again, with calculated result and current ith element.

print(result)
