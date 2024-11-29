#User function Template for python3
class Solution:
	def addBinary(self,A,B):
	    a=int(A,2)
        b=int(B,2)
        c=bin(a+b)
        d=c.replace("0b","")
        return d


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        a = input().strip()
        b = input().strip()
        ob = Solution()
        answer = ob.addBinary(a, b)

        print(answer)
        print("~")

# } Driver Code Ends