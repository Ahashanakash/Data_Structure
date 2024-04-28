#include<bits/stdc++.h>
using namespace std;

class bnode{
    public:
    int value;
    bnode* left;
    bnode* right;

    bnode (int value){
        this->left=NULL;
        this->right=NULL;
        this->value=value;
    }
};

bnode* input(){
    int n;
    cin>>n;
    if(n==-1)return NULL;
    bnode*root=new bnode(n);
    queue<bnode*>q;
    q.push(root);
    while (!q.empty())
    {
        bnode*temp=q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        bnode*left;
        bnode*right;

        if(l==-1)left=NULL;
        else left=new bnode(l);
        if(r==-1)right=NULL;
        else right=new bnode(r);

        temp->left=left;
        temp->right=right;

        if(left)q.push(left);
        if(right)q.push(right);

    }
    return root;
}

bool binary_search(bnode* root,int x){
    if(root==NULL)return false;
    if(root->value==x)return true;

    if(x<root->value)return binary_search(root->left,x);
    else return binary_search(root->right,x);
}

int main (){
    
    int x;cin>>x;
    bnode*root=input();
    //input(root);
    if(binary_search(root,x))cout<<"found";
    else cout<<"not found";
return 0;
}