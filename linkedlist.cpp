#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;


    Node(int val){
     data =val;
     next=nullptr;
    }
};

class linkedlist{
    Node *head;
    Node*tail;

     public:
    linkedlist(){
        head=tail=nullptr;
    }

   void   push_front(int val){

    Node *newnode=new Node(val);

    if(head==nullptr){

       head=tail=newnode;

    }else{
        newnode->next=head;
        head=newnode;
    }
    }

    void push_back(int val){
        Node *newnode=new Node(val);
        tail->next=newnode;
        tail=newnode;

    }

    void pop_front(){
        if(head==NULL){
            return;
        }
        Node *temp=head;
        head=head->next;
        temp->next=NULL;// for deletion of connection we do it
        delete temp;
    }
      
    void pop_back(){
        if(head==NULL){
            return;

        }
        Node *temp=head;
        while(temp->next!=NULL){
         temp=temp->next;
        }
        delete tail;
        tail=temp;

    }
    void printlist(){
        Node *temp=head;
        while (temp!=nullptr)
        {
        
         cout<<temp->data<<" ";
          temp=temp->next;
        }
        
        
        
    }
};

int main(){
    linkedlist ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    
    ll.pop_front(); 

    ll.push_back(4);

    ll.printlist();
    
}