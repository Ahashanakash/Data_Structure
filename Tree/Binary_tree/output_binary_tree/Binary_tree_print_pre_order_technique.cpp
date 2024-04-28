

//root->left->right

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

void print_tree_preorder(bNode* root){
    if (root==NULL)
    {
        return;
    }//root->left->right
    cout<<root->value<<" ";
    print_tree_preorder(root->left);
    print_tree_preorder(root->right);
    
}

int main (){
    bNode*root= new bNode(10);
    bNode*a=new bNode(20);
    bNode*b=new bNode(30);
    bNode*c=new bNode(40);
    bNode*d=new bNode(50);
    bNode*e=new bNode(60);
    bNode*f=new bNode(70);
    bNode*g=new bNode(80);
    bNode*h=new bNode(90);
    bNode*i=new bNode(100);

    root->left=a;
    root->right=b;
    a->left=c;
    a->right=h;
    c->right=e;
    h->right=i;
    b->right=d;
    d->left=f;
    d->right=g;

    //printing in pre order technique
    print_tree_preorder(root);

return 0;
}