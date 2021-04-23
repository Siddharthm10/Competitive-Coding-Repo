// { Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


 // } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    
    struct Node* reverseLL(Node* head){
        Node* curr=head;
        Node *next=NULL, *prev=NULL;
        while(curr){
            next = curr->next;
            curr->next=prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    
    void print(Node* head){
        Node* temp=head;
        while(temp){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    
    
    struct Node* addTwoLists(struct Node* first, struct Node* second){
        Node* revFirst = reverseLL(first), *revSecond = reverseLL(second);
        Node* answer=new Node(0);
        Node *answerHead= answer;
        // answer = answer->next;
        int num=0;
        while(revFirst||revSecond||num){
            if(revFirst) {
                num+=revFirst->data;
                revFirst=revFirst->next;
            }
                
            if(revSecond){
                num+=revSecond->data;
                revSecond=revSecond->next;
            }
                
            
            answer->next = new Node(num%10);
            answer = answer->next;
            
            num=num/10;
        }
        // print(answerHead);
        // cout<<(*answerHead)->data;
        // print(reverseLL(answerHead->next));
        return reverseLL(answerHead->next);
    }
};


// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}
  // } Driver Code Ends
