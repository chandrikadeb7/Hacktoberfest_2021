class Solution:    
    #Function to return the count of number of elements in union of two arrays.
    def doUnion(self,a, n, b, m):
        set_a = set(a)
        set_b = set(b)
        union_set = set_a.union(set_b)
        return len(union_set)
    
#Driver code
#{
if __name__=="__main__":
    t=int(input())
    for _ in range(t):
        n,m=[int(x) for x in input().strip().split()]

        a=[int(x) for x in input().strip().split()]
        b=[int(x) for x in input().strip().split()]
        ob=Solution()
        print(ob.doUnion(a,n,b,m))
#}
