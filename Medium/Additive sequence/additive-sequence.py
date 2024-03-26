#{ 
 # Driver Code Starts
#Initial Template for Python 3

# } Driver Code Ends
#User function Template for python3

# return 1 in case of True and 0 in case of False
class Solution:
    def isAdditiveSequence(self,st):
        n=len(st)
        for i in range(n):
            for j in range(i+1,n):
                s,e=st[:i+1],st[i+1:j+1]
                ind=j+1
                re=str(int(s)+int(e))
                le=len(re)
                while(re==st[ind:ind+le]):
                    s,e=e,re
                    ind+=le
                    re=str(int(s)+int(e))
                    le=len(re)
                    if(ind==len(st)):
                        return(1)
                    elif(ind>len(st)):
                        break
        return(0)

#{ 
 # Driver Code Starts.
        
if __name__ == "__main__":
    sol = Solution()
    t = int(input())
    for _ in range(t):
        s = input()
        print(sol.isAdditiveSequence(s))

# } Driver Code Ends