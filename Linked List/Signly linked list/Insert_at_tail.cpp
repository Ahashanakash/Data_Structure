#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node* next;
    node(int value)
    {
        this->value=value;
        this->next=NULL;
    }
};

void insert_tail(node* &head,int value){
    node* newnode = new node(value);
    if (head==NULL)
    {
        head = newnode;
        return;
    }
    node* temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void print(node* head){
    node* temp=head;
    cout<<"Linked List = ";
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main (){

    node* head=NULL;
    while (true)
    {
    cout<<endl<<"Press 1 to insert tail"<<endl;
    cout<<"Press 2 to print Linked List"<<endl;
    cout<<"Press 3 to terminate"<<endl<<endl;

    int n;
    cin>>n;
    cout<<endl;

    if(n==1){
        cout<<"Enter value"<<endl;
        int value;
        cin>>value;
        insert_tail(head,value);
    }
    else if (n==2)
    {
        print(head);
    }
    else if (n==3)
    {
        break;
    }
    }
    
return 0;
}