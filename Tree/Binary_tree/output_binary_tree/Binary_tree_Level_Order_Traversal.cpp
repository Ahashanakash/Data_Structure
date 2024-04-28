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

void level_order(bNode*root){
    queue<bNode*>q;
    q.push(root);
    while (!q.empty())
    {
        //ber kore ana
        bNode*temp=q.front();
        q.pop();

        //jabotio kaj kora
        cout<<temp->value<<" ";
    //children gulo rakha (left to right)
    if(temp->left)q.push(temp->left);
    if(temp->right)q.push(temp->right);

    //children gulo rakha (right to left)
    // if(temp->right)q.push(temp->right);    
    // if(temp->left)q.push(temp->left);
    }
    
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

    level_order(root);

return 0;
}