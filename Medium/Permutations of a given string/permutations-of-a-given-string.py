#User function Template for python3

class Solution:
    def find_permutation(self, S):
        # Code here
        from itertools import permutations
        l=[]
        for i in permutations(S):
            a="".join(i)
            l.append(a)
        l=sorted(list(set(l)))
        return l
        



#{ 
 # Driver Code Starts
#Initial Template for Python 3


if __name__ == '__main__':
	t=int(input())
	for i in range(t):
		S=input()
		ob = Solution()
		ans = ob.find_permutation(S)
		for i in ans:
			print(i,end=" ")
		print()
# } Driver Code Ends