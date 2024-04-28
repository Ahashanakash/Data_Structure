#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node* next;
    node* previous;
    node(int value)
    {
        this->value=value;
        this->next=NULL;
        this->previous=NULL;
    }
};

void insert_tail(node*&head,node*&tail,int n){
    node* newnode = new node(n);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    node*temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    tail=newnode;
    temp->next=tail;
    tail->previous=temp;
}

bool insert_at_index(node*&head,node*&tail,int index,int n){
    node*newnode = new node(n);
    node*temp=head;
    if (head==NULL){
        head=newnode;
        tail=newnode;
        return true;
    }
    
    if (index==0)
    {
        newnode->next=temp;
        temp->previous=newnode;
        head=newnode;
        return true;
    }
    for (int i = 1; i < index; i++)
    {
        temp=temp->next;
        if (temp==NULL) return false;
        
    }
    if (temp->next==NULL)
    {
    tail=newnode;
    temp->next=tail;
    tail->previous=temp;
    }
    else{
    newnode->next=temp->next;
    temp->next=newnode;
    newnode->next->previous=newnode;
    newnode->previous=temp;
    }
}

void print(node* head1){
    node* temp=head1;
    cout<<"Linked List = ";
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main (){
    int t;
    cin>>t;
    while (t--)
    {
    node*head1=NULL;
    node*tail1=NULL;

    while (true)
    {
        int n,index;
        cin>>index>>n;
        if (n==-1)
        {
            break;
        }
        insert_tail(head1,tail1,index,n);
    }
    }
    
return 0;
}