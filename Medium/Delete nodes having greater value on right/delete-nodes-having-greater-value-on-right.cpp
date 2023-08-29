//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void print(Node *root)
{
    Node *temp = root;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



// } Driver Code Ends
/*

The structure of linked list is the following

struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution
{
    public:
    Node *compute(Node *head)
    {
        Node* temp=head;
        vector<int>l;
        vector<int>m;
        stack<int>st;
        int i=1;
        while(temp)
        {
            l.push_back(temp->data);
            temp=temp->next;
        }
        m.push_back(l[l.size()-1]);
        st.push(l[l.size()-1]);
        for(i=l.size()-2; i>=0; i--)
        {
            if(l[i]>=st.top())
            {
                m.push_back(l[i]);
                st.push(l[i]);
            }
            else
            {
                continue;
            }
        }
        reverse(m.begin(),m.end());
        Node *head1=NULL;
        Node *tail=head1;
        for(int i=0; i<m.size(); i++)
        {
            Node *nn=new Node(m[i]);
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

int main()
{
    int T;
	cin>>T;

	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
        struct Node *temp = head;

		for(int i=0;i<K;i++){
		    int data;
		    cin>>data;
			if(head==NULL)
			    head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
        Node *result = ob.compute(head);
        print(result);
        cout<<endl;
    }
}

// } Driver Code Ends