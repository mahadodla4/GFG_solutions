#User function Template for python3
class Solution:
    def findKRotation(self,arr,  n):
        a=min(arr)
        for i in range(n):
            if(arr[i]==a):
                return i
        return -1


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':

	tc=int(input())
	while tc > 0:
		n=int(input())
		a=list(map(int , input().strip().split()))
		ob = Solution()
		ans=ob.findKRotation(a, n)
		print(ans)
		tc=tc-1



# } Driver Code Ends