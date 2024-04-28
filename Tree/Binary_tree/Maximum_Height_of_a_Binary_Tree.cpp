#include<bits/stdc++.h>
using namespace std;

class bNode{
    public:
    int value;
    bNode*left;
    bNode*right;

    bNode(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};

bNode* input (){
    int r;
    cin>>r;
    if(r==-1)return NULL;
    bNode *root = new bNode(r);
    queue<bNode*>q;
    q.push(root);
    while (!q.empty())
    {
        //ber kore ana
        bNode* temp=q.front();
        q.pop();

        //jabotio kaj
        int l,r;
        bNode *left;
        bNode*right;
        cin>>l>>r;
        if(l==-1) left=NULL;
        else left= new bNode(l);
        if(r==-1) right=NULL;
        else right=new bNode(r);
        
        temp->left=left;
        temp->right=right;
        
        //children push kora
        if(temp->left)q.push(left);
        if(temp->right)q.push(right);

    }
    return root;
}

int max_height(bNode*root){
    if(root==NULL)return 0;
    int l=max_height(root->left);
    int r=max_height(root->right);
    return max(l,r)+1;
}

int main (){

    bNode* root = input();
    int x=max_height(root);
    cout<<x;

return 0;
}