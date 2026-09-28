#include <bits/stdc++.h>
using namespace std;

int power_compute(int A,int n){
    if(n==0){
        return 1;

    }
    else{
        return A*power_compute(A,n-1);
    }

}

int main(){
    int A;
    cin>>A;
    int n;
    cin>>n;
    cout<<power_compute(A,n);
    return 0;

}