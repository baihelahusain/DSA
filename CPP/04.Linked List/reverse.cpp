#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = NULL;
    }
};
static void insertAtTail(Node* &head,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next=newNode;
}
static void print(Node* &head){
    if(head==NULL){
        cout<<"empty LL"<<endl;
        return;
    }
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* nextNode = NULL;
    while(curr!=NULL){
        nextNode = curr -> next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
int main(){
    Node* head = NULL;
    cout << "Original List (Empty): "<<endl;
    print(head);
    insertAtTail(head,10);
    print(head);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    insertAtTail(head, 40);
    print(head);
    cout<<"Reverse LL:"<<endl;
    head = reverse(head);//here we are storing the head of the reverse LL and then printing it.
    print(head);
}