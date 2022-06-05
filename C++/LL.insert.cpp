#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void InsertAtTail(Node* &head, int val){
    Node* n = new Node(val); //create a new node

    if(head == NULL){
        head = n;
    }
    else{
        Node* temp = head; //take temp as iterator
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
}

void display(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void InsertAtPos(Node* &head, int val, int pos){
    Node* n = new Node(val);
    Node* temp = head;
    for(int i=0; i<pos-1; i++){
            temp = temp->next;
        }
        // Node* t;
        // t = temp->next;
        temp->next = n;
        n->next = t;
}

int main(){
    Node* head = NULL;
    int num;
    cin>>num;
    for(int i=1; i<=num; i++){
        int val;
        cin>>val;
        InsertAtTail(head,val);
    }
    int val,pos;
    cin>>val>>pos;
    InsertAtPos(head,val,pos);
    display(head);
    return 0;
}