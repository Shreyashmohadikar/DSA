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

int main(){
    Node* head = NULL;
    int num;
    cin>>num;
    for(int i=0; i<num; i++){
        int val;
        cin>>val;
        InsertAtTail(head,val);
    }
    display(head);
    return 0;
}