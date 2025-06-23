import sys
sys.set_int_max_str_digits(int(1e9))
class Solution:
    def minSum(self, arr):
        n=len(arr)
        if(len(arr)<=2):
          return sum(arr)
        arr.sort()
        s1,s2='',''
        for i in range(n):
            if(i%2==0):
                s1+=str(arr[i])
            else:
                s2+=str(arr[i])
        a=int(s1)
        b=int(s2)
        c=a+b
        return str(c)