//{ Driver Code Starts
// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};


void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    
    *tail_ref = new_node;
}


// } Driver Code Ends
/* Link list Node 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
*/

/*You are required to complete this method*/

/* Function to get the middle of the linked list*/
/*K will always be in range */
#include<bits/stdc++.h>
class Solution {
    public:
    Node* deleteK(Node *head,int K)
    {
        Node* temp=head;
        vector<int>l;
        vector<int>m;
        while(temp!=NULL)
        {
    
           l.push_back(temp->data);
           temp=temp->next;
        }
        int i,n=l.size();
        for(i=K-1; i<n; i+=K)
        {
            l[i]=-1;
        }
        for(auto i:l)
        {
            if(i!=-1)
            {
                m.push_back(i);
            }
        }
        Node* head1=NULL;
        Node* tail=head1;
        for(i=0; i<m.size(); i++)
        {
            Node* nn=new Node(m[i]);
            if(head1==NULL)
            {
                head1=nn;
                tail=head1;
            }
            else
            {
                tail->next=nn;
                tail=tail->next;
            }
        }
        return head1;
    }
};


//{ Driver Code Starts.

/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        int K;
        cin>>K;
        Solution obj;
        Node *res = obj.deleteK(head,K);
        Node *temp = res;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends