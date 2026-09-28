// #include <iostream>
// using namespace std;
// int sum(int a,int b){
//         return a+b;
//  }
// int sub(int a, int b){
//      return a-b;

// }
//  int multiply(int a,int b){
//     return a*b;
// }
// int divide(int a ,int b){
//    if(b!=0){
//            return a/b;
//    }
   
//  }

//     int a,b;
//     cin>>a>>b;
//     cout<<"sum "<<sum(a,b)<<endl;
//     cout<<"sub "<<sub(a,b)<<endl;
//     cout<<"multiply "<<multiply(a,b)<<endl;
//     cout<<"divide "<<divide(a,b)<<endl;

// int main(){
//     int op,a,b;
// cin>>op;
// cin>>a>>b;

// switch(op)
// {
//     case 1:
//              cout<<"sum"<<sum(a,b);
//             break;

//     case 2: 
//             cout<<"sub"<<sub(a,b);
//             break;
    
//     case 3:
//             cout<<"multiply"<<multiply(a,b);
//             break;

//     case 4 : 
//             cout<<"divide"<<divide(a,b);
//         break;

//     default:
//     cout<<"not valid";
//     break;
// }

// }
// int fact(int a){
//     if(a==0)||(a==1){
//         return 1;
//     }
//     for(int i=n-1;i>0;i--)
//     {
//         fact = 0;

//     }

    //take input 2 n size array and merge two array into 1 array

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>a;
    vector<int>b;
    for(int i=0;i<=5;i++){
        int x;
        cin>>x;
        a.push_back(x);
        
    }
for(int i=0;i<=5;i++){
        int x;
        cin>>x;
        b.push_back(x);
        
    }    
for(int i=0;i<=5;i++){
        a.push_back(b[i]);
        
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
        
    }

}





