#User function Template for python3

class Solution:
    def reversedBits(self, X):
        a=bin(X)
        a=a.replace('0b','')
        b=(32-len(a))*'0'
        c=b+a
        d=c[::-1]
        e=int(d,2)
        return e
        


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        X=int(input())
        
        ob = Solution()
        print(ob.reversedBits(X))
# } Driver Code Ends