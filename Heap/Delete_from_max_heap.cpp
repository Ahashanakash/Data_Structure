#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int>&v,int x){
    v.push_back(x);
    int current_index=v.size()-1;
    while (current_index!=0)
    {
        int present_index=(current_index-1)/2;
        if (v[current_index]>v[present_index])
        {
            swap(v[current_index],v[present_index]);
            current_index=present_index;
        }
        else break;
    }
}

void delete_max_heap(vector<int>&v){
    v[0]=v[v.size()-1];
    v.pop_back();
    int current_index=0;
    while (true)
    {
        int left=current_index*2+1;
        int right=current_index*2+2;
        int last_index=v.size()-1;
        if(left<=last_index && right<=last_index)
        {
            if (v[left]>v[current_index] && v[left]>=v[right])
            {
                swap(v[left],v[current_index]);
                current_index=left;
            }
            else if (v[right]>v[current_index] && v[right]>=v[left])
            {
                swap(v[right],v[current_index]);
                current_index=right;
            }
            else break;
        }
        else if (left<=last_index)
        {
            if (v[left]>v[current_index])
            {
                swap(v[left],v[current_index]);
                current_index=left;
            }
            else break;
            
        }
        else if (right<=last_index)
        {
            if (v[right]>v[current_index])
            {
                swap(v[right],v[current_index]);
                current_index=right;
            }
            else break;
        }
        else break;
    }
    
}

int main (){
    int n;
    cin>>n;
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        insert_heap(v,x);
    }

    delete_max_heap(v);

    for (auto i : v)
    {
        cout<<i<<" ";
    }
    
    
return 0;
}