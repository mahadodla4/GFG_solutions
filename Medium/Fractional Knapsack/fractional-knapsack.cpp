//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        vector<int>weights;
        vector<int>values;
        vector<int>profit;
        vector<pair<double,pair<double,double>>>res;
        int i;
        for(i=0; i<n; i++)
        {
            double a=arr[i].weight;
            double b=arr[i].value;
            double c=b/a;
            res.push_back({c,{b,a}});
        }
        
        sort(res.rbegin(),res.rend());
        double ans=0.0;
        for(auto i:res)
        {
            double val=i.second.first;
            double wei=i.second.second;
            double pro=i.first;
            if(W>=wei)
            {
                ans+=val;
                W-=wei;
            }
            else
            {
                ans+=((val/wei)*W);
                W=0;
            }
        }
        return ans;
    }
        
};


//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(6)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends