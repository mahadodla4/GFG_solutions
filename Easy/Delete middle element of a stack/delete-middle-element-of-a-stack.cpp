//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        int n=sizeOfStack,mid=n/2,i;
        vector<int>vec;
        while(!s.empty())
        {
            vec.push_back(s.top());
            s.pop();
        }
        reverse(vec.begin(),vec.end());
        if(n%2!=0)
        {
            vec.erase(vec.begin()+mid);
        }
        if(n%2==0)
        {
            vec.erase(vec.begin()+mid-1);
        }
        for(i=0; i<vec.size(); i++)
        {
            s.push(vec[i]);
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int sizeOfStack;
        cin>>sizeOfStack;
        
        stack<int> myStack;
        
        for(int i=0;i<sizeOfStack;i++)
        {
            int x;
            cin>>x;
            myStack.push(x);    
        }

            Solution ob;
            ob.deleteMid(myStack,myStack.size());
            while(!myStack.empty())
            {
                cout<<myStack.top()<<" ";
                myStack.pop();
            }
        cout<<endl;
    }   
    return 0;
}

// } Driver Code Ends