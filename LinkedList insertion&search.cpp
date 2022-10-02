#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    //constructor
    node(int val){
        data=val;
        next = NULL;
    }
    
};
void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}
 void insertAtTail(node* &head,int val){
        node* n = new node(val);

        if(head == NULL){
            head = n;
            return;
        }
        node* temp = head;
        while(temp->next !=NULL){
             temp = temp->next;
        }

        temp ->next = n;//last node meh n ka valiue add kardega

    }
    bool search(node* &head,int key){
        node* temp = head;
        while(temp!= NULL){
            if(temp->data == key){
                return true;
            }
            temp=temp->next;
        }
        return false;

    }
    void display(node* &head){
        node* temp = head;
        while(temp != NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtHead(head,0);
    display(head);
    cout<<search(head,1);
    return 0;
}
