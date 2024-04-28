#include<bits/stdc++.h>
using namespace std;

class bnode{
        public:
        int value;
        bnode* left;
        bnode* right;
        bnode(int value)
        {
            this->value=value;
            this->left=NULL;
            this->right=NULL;
        }
    };

bnode* input (){
    int r;
    cin>>r;
    if(r==-1)return NULL;
    bnode *root = new bnode(r);
    queue<bnode*>q;
    q.push(root);
    while (!q.empty())
    {
        //ber kore ana
        bnode* temp=q.front();
        q.pop();

        //jabotio kaj
        int l,r;
        bnode *left;
        bnode*right;
        cin>>l>>r;
        if(l==-1) left=NULL;
        else left= new bnode(l);
        if(r==-1) right=NULL;
        else right=new bnode(r);
        
        temp->left=left;
        temp->right=right;
        
        //children push kora
        if(temp->left)q.push(left);
        if(temp->right)q.push(right);

    }
    return root;
}

void insert(bnode*&root,int x){
    if(root==NULL)
    {
        root=new bnode(x);
        return;
    }    
    if (x<root->value)
    {
        if(root->left==NULL)
        root->left=new bnode(x);
        else insert(root->left,x);
    }
    else
    {
        if(root->right==NULL)
        root->right=new bnode(x);
        else insert(root->right,x);
        
    }
}

void print(bnode*root){
    queue<bnode*>q;
    q.push(root);
    while (!q.empty())
    {
        bnode*temp=q.front();
        q.pop();

        cout<<temp->value<<" ";

        if(temp->left!=NULL)q.push(temp->left);
        if(temp->right!=NULL)q.push(temp->right);
    }
    
}

int main (){
    int x;
    cin>>x;
    bnode*root=input();
    insert(root,x);
    print(root);
return 0;
}