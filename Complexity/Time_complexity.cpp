//1.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,j,r;
    cin>>n;
    r=0;
    for(i = 0; i < n ; i++ ){ 
        for(j=0;j<n;j++){
            r=r+1;}
            }       
    cout<<r<<endl;
    return 0;
}
/*
the time comlexity of the code is 0(n^2)
*/


//2.
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int i,n,j,k,r,r1;
//     cin>>n;
//     r=0;
//     for(i = 0; i < n ; i++ ){ 
//         for(j=0;j<n;j++){
//             r=r+1;}
//             }  
//             r1=0;
//             for ( k = 0; k < n; k++)
//             {
//                 r1=r1+1;
//             }
                 
//     cout<<r<<endl;
//     cout<<r1<<endl;
//     return 0;
// }
/*
the time comlexity of the code is not 0(n^2+n)
it is 0(n^2) because n^2 is greater than n
*/