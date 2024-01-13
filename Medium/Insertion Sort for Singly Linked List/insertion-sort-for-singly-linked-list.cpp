//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};

/* Function to print linked list */
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}




// } Driver Code Ends
//User function Template for C++

/*Link list node
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};*/

class Solution
{
    public:
    void insertion_sort(vector<int>&arr,int n)
    {
    	int i,j,temp;
    	for(i=1; i<n; i++)
    	{
    		j=i-1;
    		while(arr[i]<arr[j])
    		{
    			temp=arr[i];         
    			while(temp<arr[j])      
    			{
    				arr[j+1]=arr[j];
    				arr[j]=temp;
    				j--;
    			}
    		}
    	}
    	if(j=-1)
    	{
    		arr[i]=temp;
    	}
    }
    Node* insertionSort(struct Node* head_ref)
    {
        Node* temp=head_ref;
        vector<int>l;
        while(temp!=NULL)
        {
            l.push_back(temp->data);
            temp=temp->next;
        }
        insertion_sort(l,l.size());
        Node* head=NULL;
        Node* tail=head;
        for(int i=0; i<l.size(); i++)
        {
            Node* nn=new Node(l[i]);
            if(head==NULL)
            {
                head=nn;
                tail=head;
            }
            else
            {
                tail->next=nn;
                tail=tail->next;
            }
        }
        return head;
    }
    
};

//{ Driver Code Starts.
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int n;
		cin >> n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < n; i++) {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}

        Solution ob;

		head = ob.insertionSort(head);
		printList(head);

		cout << "\n";



	}
	return 0;
}
// } Driver Code Ends