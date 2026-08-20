#include<iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int val){
        data =val;
        next=NULL;
    }
    
};
class ll{
    Node *head,*tail;
    public:
    ll(){
        head=tail=NULL;
    }
    void push_front(int val ){
      Node *newnode=new Node(val);
      if(head==NULL){
       head=tail=newnode;   
    }
    else{
        newnode->next=head;
        head=newnode;
    }
    }

    void printll(){
        Node *temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n";
    }


    void reversinglist(){
        Node *prev=NULL;
        Node *current=head;
        Node *Next=NULL;
        while(current!=NULL){
            Next=current->next;
            current->next=prev;
            prev=current;
            current =Next;
        }
        // tail=head;
        head=prev;
    }
    
};
int main(){
    ll a;
    a.push_front(1);
    a.push_front(2);
    a.push_front(3);
    a.push_front(4);
    a.printll();
    a.reversinglist();
    a.printll();

}