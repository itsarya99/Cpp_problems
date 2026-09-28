#include <iostream>
using namespace std;
    int countDigit(int n) {
        int count=0;
        while(n>0){
             count++;
            n/=10;
        }
        cout<<count;

    }
    int main(){
        int n;
        cin>>n;
        countDigit(n);
    }