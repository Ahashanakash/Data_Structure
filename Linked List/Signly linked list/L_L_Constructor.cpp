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
    node a(10),b(20);
    a.next=&b;
    cout<<a.next->value;
return 0;
}