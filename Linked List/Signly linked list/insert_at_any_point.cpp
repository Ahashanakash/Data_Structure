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
    node*newnode = new node(value);
    if (head==NULL)
    {
        head = newnode;
        return;
    }
    node*temp = head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void insert_pos(node* &head,int pos,int value){
    node*newnode = new node(value);
    node* temp=head;
    if (pos==1)
    {
        newnode->next=head;
        head=newnode;
    }
    else
    {
        for (int i = 2; i <= pos-1; i++)
    {
        temp=temp->next;
        if (temp==NULL)
        {
            cout<<"Position not found. Can't insert ghost."<<endl;
            return;
        }
        
    }
    newnode->next=temp->next;
    temp->next=newnode;
    }
}

void deletion (node* &head,int pos){

    if (pos==1)
    {
        if (head==NULL)
        {
           cout<<"NO, Head found. Can't delete ghost"<<endl;
        }
        node*deletehead=head;
        head=head->next;
        delete deletehead;
    }
    else
    {
        node*temp=head;
    for (int i = 0; i <= pos-1; i++)
    {
        temp=temp->next;
        if (temp==NULL)
        {
            cout<<"Position Not found. Cant't delete ghost."<<endl;
            return;
        }
    }
    if (temp->next==NULL)
    {
        cout<<"Position not fount. Can't delete ghost."<<endl;
        return;
    }
    node*deletenode=temp->next;
    temp->next=temp->next->next;
    delete deletenode;
    } 
}

void print(node* head){
    node*temp=head;
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
    cout<<"Press 1 to add value -"<<endl;
    cout<<"Press 2 to add value in any position - "<<endl;
    cout<<"Press 3 to print - "<<endl;
    cout<<"Press 4 to terminate - "<<endl;
    cout<<"Press 5 to delete value"<<endl;

    int n;
    cin>>n;

    if (n==1)
    {
        cout<<"Enter value = ";
        int value;
        cin>>value;
        insert_tail(head,value);
    }
    else if (n==2)
    {
        int pos,value;
        cout<<"Enter position = ";
        cin>>pos;
        cout<<"Enter value = ";
        cin>>value;
        insert_pos(head,pos,value);
    }
    else if (n==3)
    {
        print(head);
    }
    else if (n==4)
    {
        break;
    }
    else if (n==5)
    {
        cout<<"Enter position = ";
        int pos;
        cin>>pos;
        deletion(head,pos);
    }
    }
return 0;
}