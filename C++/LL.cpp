#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};
void printList(Node* node){
    while(node != NULL){
        cout<<node->data<<" ";
        node = node->next;
    }
}
void inser_at_front(Node)
int main(){
    Node* head = NULL;

    
    printList(head);
    return 0;
}