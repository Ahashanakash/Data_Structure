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

bnode* convert(int arr[],int n,int l,int r){
    if(l>r)return NULL;
    int mid=(l+r)/2;
    bnode*root=new bnode(arr[mid]);
    bnode*left=convert(arr,n,l,mid-1);
    bnode*right=convert(arr,n,mid+1,r);
    root->left=left;
    root->right=right;
    return root;
}

void print_level_order(bnode*root){
    queue<bnode*>q;
    q.push(root);
    while (!q.empty())
    {
        bnode*temp=q.front();
        q.pop();
        cout<<temp->value<<" ";
        if(temp->left)q.push(temp->left);
        if(temp->right)q.push(temp->right);
    }
    
}

int main (){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)cin>>arr[i];

    bnode* root=convert(arr,n,0,n-1);
    print_level_order(root);
    
    
return 0;
}