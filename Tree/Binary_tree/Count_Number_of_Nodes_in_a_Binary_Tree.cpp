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

int cnt_node(bNode* root){
    if(root==NULL) return 0;

    int l=cnt_node(root->left);
    int r=cnt_node(root->right);
    return l+r+1;
}

int main (){

    bNode* root = input();
    int x=cnt_node(root);
    cout<<x;

return 0;
}