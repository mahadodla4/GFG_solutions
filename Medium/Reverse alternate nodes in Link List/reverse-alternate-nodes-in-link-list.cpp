//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/
#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void rearrange(struct Node *odd)
    {
        Node* temp=odd;
        vector<int>l1;
        vector<int>l2;
        vector<int>l;
        while(temp)
        {
            l.push_back(temp->data);
            temp=temp->next;
        }
        int i=0,n=l.size();
        for(i=0; i<n; i+=2)
        {
            l1.push_back(l[i]);
        }
        for(i=1; i<n; i+=2)
        {
            l2.push_back(l[i]);
        }
        reverse(l2.begin(),l2.end());
        for(auto i:l2)
        {
            l1.push_back(i);
        }
        for(auto i:l1)
        {
            odd->data=i;
            odd=odd->next;
        }
    }
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends