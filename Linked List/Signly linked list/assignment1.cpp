// #include<bits/stdc++.h>
// using namespace std;

// class node {
// public:
//     long long value;
//     node* next;

//     node(long long value) {
//         this->value = value;
//         this->next = NULL;
//     }
// };

// void insert_tail(node* &head,node* &maax,node* &mini,long long val) {
//     node*newnode=new node(val);

//     if (head==NULL) {
//         head=newnode;
//         maax=newnode;
//         mini=newnode;
//         return;
//     } 
//         head->next=newnode;
//         head=newnode;
//         if (maax->value<newnode->value)maax=newnode;
//         if (mini->value>newnode->value)mini=newnode;
// }

// int main() {
//     node*head=NULL;
//     node*maax=NULL;
//     node*mini=NULL;

//     while(true) {
//         long long value;
//         cin>>value;
//         if (value==-1) break;
//         insert_tail(head,maax,mini,value);
//     }
//     (head==NULL)?cout<<"0" : cout<<maax->value-mini->value;
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int value;
//     node* next;
//     node(int value)
//     {
//         this->value=value;
//         this->next=NULL;
//     }
// };

// void insert_tail(node* &head,int value){
//     node* newnode=new node(value);
//     if (head==NULL)
//     {
//         head=newnode;
//         return;
//     }
//     node*temp=head;
//     while (temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=newnode;
// }

// bool check(node*head,node*head1){
//     node*temp=head;
//     node*temp1=head1;
//     while (temp!=NULL && temp1!=NULL)
//     {
//         if (temp->value!=temp1->value)return false;
//         temp=temp->next;
//         temp1=temp1->next;
//     }
//     if (temp==NULL && temp1==NULL)return true;
//     else return false;
// }

// int main (){
//     node*head =NULL;
//     while (true)
//     {
//         int value;
//         cin>>value;
//         if (value==-1)break;
//         insert_tail(head,value);
//     }
//     node*head1=NULL;
//     while (true)
//     {
//         int value;
//         cin>>value;
//         if (value==-1)break;
//         insert_tail(head1,value);
//     }
//     bool ans=check(head,head1);
//     if (ans)cout<<"YES";
//     else cout<<"NO";
// return 0;
// }




// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int value;
//     node* next;
//     node(int value)
//     {
//         this->value=value;
//         this->next=NULL;
//     }
// };

// void insert_tail(node* & head,int val){
//     node* newnode=new node(val);
//     if (head==NULL)
//     {
//         head=newnode;
//         return;
//     }
//     node*temp=head;
//     while (temp->next!=NULL)
//     {
//         temp=temp->next;
//     }
//     temp->next=newnode; 
// }

// void delet(node* head) {
//     node* i=head;
//     while (i!=NULL) {
//     node* j=i;
//     while (j->next!=NULL) 
//     {
//         if (j->next->value==i->value) 
//         {
//             node* deletenode=j->next;
//             j->next=j->next->next;
//             delete deletenode;
//         }
//         else j=j->next;
//         }
//         i=i->next;
//     }
// }

// void print(node* head){
//     node*temp=head;
//     while (temp!=NULL)
//     {
//         cout<<temp->value<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }

// int main (){
//     node*head=NULL;
//     while (true)
//     {
//         int value;
//         cin>>value;
//         if (value==-1)
//         {
//             break;
//         }
//         insert_tail(head,value);
//     }
//     delet(head);
//     print(head);
    
// return 0;
// }



// #include<bits/stdc++.h>
// using namespace std;

// class node{
//     public:
//     int value;
//     node* next;
//     node(int value)
//     {
//         this->value=value;
//         this->next=NULL;
//     }
// };

// int comp(node* head,int x) 
// {
//     int pos=0;
//     while (head!=NULL) 
//     {
//         if (head->value==x)return pos;
//         head=head->next;
//         pos++;
//     }
//     return -1;
// }

// int main (){
//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int value;
//         cin>>value;
//         if (value==-1)
//         {
//             cout<<"-1"<<endl;
//             break;
//         }
//         node*head =new node(value);
//         node*temp=head;
//     while (true)
//     {
//         int value;
//         cin>>value;
//         if (value==-1)break;
//         node*newnode=new node(value);
//         temp->next=newnode;
//         temp=newnode;
//     }
//     int x;
//     cin>>x;
//     int ans=comp(head,x);
//     cout<<ans<<endl;
//     }
    
// return 0;
// }




#include<bits/stdc++.h>
using namespace std;

class node {
    public:
    int value;
    node* next;
    node(int value) 
    {
        this->value=value;
        this->next=NULL;
    }
};

void insert_head(node* &head,int val) {
    node* newnode=new node(val);
    newnode->next=head;
    head=newnode;
}

void insert_tail(node* &head,int val) {
    node* newnode=new node(val);
    if (head==NULL) 
    {
        head=newnode;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL) 
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void delet(node* &head,int in) {
    if (head==NULL)return;
    if (in==0) {
        node* temp=head;
        head=head->next;
        delete temp;
        return;
    }
    node* temp=head;
    for (int i=0; temp!=NULL && i<in-1;i++) 
    {
        temp=temp->next;
    }
    if (temp==NULL || temp->next==NULL)return;
    node* deletenode=temp->next;
    temp->next=temp->next->next;
    delete deletenode;
}

void print(node* head) {
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main() {
    int t;
    cin>>t;
    node* head=NULL;
    while (t--) 
    {
        int x,v;
        cin>>x>>v;
        if (x==0)insert_head(head,v);
        else if(x==1)insert_tail(head,v);
        else if (x==2)delet(head,v);
        print(head);
    }
    return 0;
}
