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

void bNode* input (){
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

void print_level_order(bNode* root){
    if(root==NULL)
    {
        cout<<"No input"<<endl;
        return;
    }
    queue<bNode*>q;
    q.push(root);
    while (!q.empty())
    {
        //ber kora
        bNode* temp=q.front();
        q.pop();

        //jabotio kaj
        cout<<temp->value<<" ";

        //children push kora
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }

}

int main (){

    bNode* root = input();
    print_level_order(root);

return 0;
}