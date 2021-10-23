from functools import lru_cache
@lru_cache(None)
def helper(n):
    if(n==-1):
        return(0)
    elif(n==0):
        return(1)
    return(helper(n-1)+helper(n-2))
class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        x=helper(n)
        print(helper.cache_info())
        return(x)
