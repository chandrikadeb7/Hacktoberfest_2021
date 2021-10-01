# Returns max value that can be put in knapsack of capacity W with dynamic programming
def knapSack(C, w, val, n):
    K = [[0 for x in range(C + 1)] for x in range(n + 1)]
    for i in range(n + 1):
        for j in range(C + 1):
            if i == 0 or j == 0:
                K[i][j] = 0
            elif w[i-1] <= j:
                K[i][j] = max(val[i-1] + K[i-1][j-w[i-1]],  K[i-1][j])
            else:
                K[i][j] = K[i-1][j]
    return K[n][C]
  
# main program 
val = [60, 100, 120]
w = [10, 20, 30]
C = 50
n = len(val)
print(knapSack(C, w, val, n))