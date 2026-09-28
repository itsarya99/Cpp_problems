#include <bits/stdc++.h>
using namespace std;

int gcd_compute(int a,int b){
    if(a==b){
        return b;
    }
    if(b%a==0){
        return a;
    }
    if(a%b==0){
        return b;

    }
    if(a>b){
        return (a%b,b);
    }
    if(b>a){
        return (b%a,a);
    }

}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd_compute(a,b);
    return 0;

}