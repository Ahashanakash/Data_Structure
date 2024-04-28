#include<bits/stdc++.h>
using namespace std;

class my_stack{
    public:
    vector<int> v;
    void push(int value){
        v.push_back(value);
    }
    void pop(){
        v.pop_back();
    }
    int top(){
        return v.back();
    }
    int size(){
        return v.size();
    }
    bool empty(){
        if(v.size()==0) return true;
        else return false;
    }
};

int main (){
    my_stack st;

    //input
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    //empty
    if(st.empty()==false) cout<<"Not Empty"<<endl;
    else cout<<"Empty"<<endl;

    //top
    if(st.empty()==false) cout<<st.top()<<endl;

    //push
    st.push(9);

    //pop
    if(!st.empty()) st.pop();

    //size
    cout<<st.size()<<endl;

    while (st.empty()==false)
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    
    
return 0;
}