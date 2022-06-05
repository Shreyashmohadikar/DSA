#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Node(int val){
    //     data = val;
    //     next = NULL;
    // }
};

void InsertAtHead(Node* &head, int val){
    // Node* n = new Node(val); //create a new node
    Node* n = new Node();
    n->data = val;
    n->next=head;
    head = n;
}

void display(Node* temp){
    // Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    Node* head = NULL;
    int num;
    cin>>num;
    for(int i=0; i<num; i++){
        int val;
        cin>>val;
        InsertAtHead(head,val);
    }
    display(head);
    return 0;
}