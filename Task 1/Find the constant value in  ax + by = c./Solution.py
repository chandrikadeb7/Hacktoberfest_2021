# Here you will find the solution in python language

# Given two numbers in the form of equation:

# GCD function:
def GCD(a, b):
  if a == 0:
    return b
  return GCD(b, a%b)


a,b = 5, 10
# Call GCD 
result = GCD(a, b)
print(result)

# result is constnat value.
