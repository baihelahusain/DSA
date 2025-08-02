#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int value){
        data = value;
        next = NULL;
    }
    static void insertAtHead(node*& head, int value){
        node* newNode = new node(value);
        newNode -> next = head;
        head = newNode;
    }
    static void insertAtTail(node*& head, int value){
        node* newNode = new node(value);
        if(head==NULL){
            head = newNode;
            return;
        }
        node* temp = head;
        while(temp -> next!=NULL){
            temp = temp ->next;
        }
        temp->next = newNode;
    }
    static void display(node* head){
        node* temp = head;
        while(temp!=NULL){
            cout<< temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};
int main(){
    node* head = NULL;

    node::insertAtHead(head, 10);
    node::insertAtHead(head, 20);
    node::insertAtTail(head, 30);
    node::insertAtTail(head, 40);

    node::display(head);
    return 0;
}