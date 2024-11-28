//{ Driver Code Starts
import java.io.*;
import java.util.*;

class Sorting {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(br.readLine());
        for (int g = 0; g < t; g++) {
            String[] str = (br.readLine()).trim().split(" ");
            int arr[] = new int[str.length];
            for (int i = 0; i < str.length; i++) arr[i] = Integer.parseInt(str[i]);
            System.out.println(new Solution().circularSubarraySum(arr));
            // System.out.println("~");
        }
    }
}
// } Driver Code Ends


class Solution {

    // a: input array
    // n: size of array
    // Function to find maximum circular subarray sum.
    public int circularSubarraySum(int arr[]) {
        int min=Integer.MAX_VALUE;
        int max=Integer.MIN_VALUE;
        int sum1=0;
        int sum2=0;
        int total=0;
        for(int i=0; i<arr.length; i++) {
            sum1+=arr[i];
            sum2+=arr[i];
            total+=arr[i];
            if(sum2>0) {
                sum2=0;
            }
            else {
                min=Math.min(sum2,min);
            }
            if(sum1<0) {
                sum1=0;
            }
            else {
                max=Math.max(sum1,max);
            }
        }
        return Math.max(max,total-min);
    }
}