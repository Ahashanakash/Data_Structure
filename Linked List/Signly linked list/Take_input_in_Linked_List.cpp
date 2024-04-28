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
        head=newnode;
        return;
    }
    node*temp= head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void print(node*head){
    node*temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main (){

    node*head=NULL;
    while (true)
    {
        int value;
        cin>>value;

        if (value==-1)
        {
            break;
        }

        insert_tail(head,value);
    }
    print(head);
    
return 0;
}