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

int main (){
    //declaring dynamic array(node)
    node*head = new node(10);
    node*a = new node(20);
    node*b = new node(30);
    node*c = new node(40);
    node*d = new node(50);

    //connecting adress to nodes
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    //temp for not to lose head
    node* temp = head;

    //printing list one by one
    while (temp!=NULL)
    {
        cout<<temp->value<<endl;
        temp=temp->next;
    }

    //temp will get values of first element(head) 
    temp=head;

return 0;
}