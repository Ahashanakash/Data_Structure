#include<bits/stdc++.h>
using namespace std;
class myQueue{
    public:
    list<int> l;
    void pop(){
        l.pop_front();
    }
    void push(int value){
        l.push_back(value);
    }
    int front(){
        return l.front();
    }
    int size(){
        return l.size();
    }
    bool empty(){
        return l.empty();
    }
};
int main (){
    myQueue q;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        q.push(x);
    }

    cout<<q.size();
    cout<<endl;

    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    if(!q.empty()) cout<<q.front();

    cout<<endl;
    cout<<q.size();
    
    
return 0;
}