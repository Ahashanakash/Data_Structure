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

void delete_index(node*&head,node*&tail,int index){
    node* temp = head;
    node* deletenode;
    if (n==0)
    {
        deletenode=head;
        head=temp->next;
        delete deletenode;
    }
    for (int i = 1; i <index ; i++)
    {
        temp=temp->next;
        if(temp==NULL) return;
    }
    if (temp->next==NULL)
    {
        deletenode=temp;
        tail=temp->previous;
        delete temp;
        tail->next=NULL;
    }
    else
    {
        deletenode=temp->next;
        temp->next=temp->next->next;
        temp->next->next->previous=temp;
    }
}

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

void insert_at_index(node*&head,node*&tail,int index,int n){
    node*newnode = new node(n);
    node*temp=head;
    if (head==NULL){
        head=newnode;
        tail=newnode;
        return;
    }
    
    if (index==0)
    {
        newnode->next=temp;
        temp->previous=newnode;
        head=newnode;
        return;
    }
    for (int i = 1; i < index; i++)
    {
        temp=temp->next;
        if (temp==NULL) return;
        
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

bool compare_linkedlist(node*&head1,node*&head2){
    node* temp = head1;
    node* temp2 = head2;
    while (temp!=NULL && temp2!=NULL)
    {
        if (temp->value!=temp2->value) return false;
        temp=temp->next;
        temp2=temp2->next;
    }
    if (temp==NULL && temp2==NULL)return true;
    else return false;  
}

bool palindrome_linkedlist(node* head,node* tail){
    node*heead=head;
    node*taail=tail;
    while (heead!=taail && taail->next!=heead)
    {
        if (heead->value!=taail->value)
        {
            return false;
        }
        heead=heead->next;
        taail=taail->previous;
    }
    return true;
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

void print_reverse(node* tail){
    node* temp=tail;
    cout<<"Linked List = ";
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->previous;
    }
    cout<<endl;
}

int main (){
    node*head1=NULL;
    node*tail1=NULL;
    node*head2=NULL;
    node*tail2=NULL;
    while (true)
    {
        int n;
        cin>>n;
        if (n==-1)
        {
            break;
        }
        insert_tail(head1,tail1,n);
    }
    print(head1);
    print_reverse(tail1);
    
return 0;
}