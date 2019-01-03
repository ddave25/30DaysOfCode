#include <iostream>
#include <cstddef>

using namespace std;
	
class Node  // to create a node with 2 slots
{
    public:
        int data;   //1st slot in node to store integer value
        Node *next; //2nd slot is a pointer to the next node
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Solution{
    
    public:
        Node* insert(Node *head,int data)
        {
          //Complete this method
          Node* n = new Node(data);
          Node* t;   // static keyword necessary to keep track of last location of t
          
          if (head == NULL)
          {
                head = n; // the pointer called head points to the node n is pointing to
            }
          
          else
          {
                t -> next = n; // the pointer in the node which t is currently pointing to will now point to the node n is pointing to
            }
          
          t = n; // t now points to the same node n is pointing to
          
          return head;
          
        }
        
        void display(Node *head)
        {
            Node *start=head;
            while(start)
            {
                cout << start->data <<" ";
                start = start->next;
            }
        }
};

int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
	mylist.display(head);
	
	cin.get();
	cin.get();
	
	return 0;
}
