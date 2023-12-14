#User function Template for python3

class Solution:
    def countWays(self,n,k):
        mod=1000000007
        if(n==0):
            return 0
        if(n==1):
            return k
        l=[0]*(n+1)
        l[1]=k
        l[2]=k*k
        for i in range(3,n+1):
            l[i]=((k-1)*(l[i-1]+l[i-2]))%mod
        return l[n]



#{ 
 # Driver Code Starts

#Initial Template for Python 3




t=int(input())
for _ in range(0,t):
    x=list(map(int,input().split()))
    n=x[0]
    k=x[1]
    ob = Solution()
    ans=ob.countWays(n,k)
    print(ans)

# } Driver Code Ends