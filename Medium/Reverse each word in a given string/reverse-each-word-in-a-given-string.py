#User function Template for python3

class Solution:
    def reverseWords(self, s):
        s=s.split(".")
        l=[]
        for i in s:
            a=i[::-1]
            l.append(a)
        return '.'.join(l)


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t = int(input())
    for _ in range(t):
        s = input().strip()
        ob = Solution()
        ans = ob.reverseWords(s)
        print(ans)
# } Driver Code Ends