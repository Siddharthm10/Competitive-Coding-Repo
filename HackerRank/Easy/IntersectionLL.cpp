#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the findMergeNode function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
int getCount(SinglyLinkedListNode *head){
    struct SinglyLinkedListNode* temp = head;
    int length=0;
    while(temp!=NULL){
        temp = temp->next;
        length++;
    }
    return length;
}
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    

    struct SinglyLinkedListNode* tempA = head1;
    struct SinglyLinkedListNode* tempB = head2;
    int l1=getCount(tempA), l2=getCount(tempB);
    
    
    if(l1>l2){
        int diff = l1-l2;
        while(diff-->0){
            tempA=tempA->next;
        }
    }
    else{
        int diff = l2-l1;
        while(diff-->0){
            tempB=tempB->next;
        }
    }
    while(tempA!=tempB){
        tempA=tempA->next;
        tempB=tempB->next;
    }
    
    return tempA->data;
}



int main()