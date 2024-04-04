//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.io.*;
import java.util.*;
class GFG {
	public static void main (String[] args) {
	    
	    //taking input using Scanner class
		Scanner sc=new Scanner(System.in);
		
		//taking total testcases
		int t=sc.nextInt();
		sc.nextLine();
		while(t-->0)
		{
		    //taking the String
		    String s=sc.nextLine();
		    Solution ob = new Solution();
		    //calling method sumSubstrings() 
		    System.out.println(ob.sumSubstrings(s));
		}
	}
}
// } Driver Code Ends


//User function Template for Java

class Solution
{
    //Function to find sum of all possible substrings of the given string.
    public static long sumSubstrings(String s)
    {
        int mod  = (int)Math.pow(10, 9) + 7;
        long factor = 1, ans = 0;
        for(int i = s.length()-1; i>=0; i--) 
        {
            int c = s.charAt(i)-'0';
            ans += (c * factor * (i+1))%mod;
            factor = (factor*10 + 1)%mod;
        }
        return ans%mod;
    }
}