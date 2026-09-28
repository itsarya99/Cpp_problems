#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter years"<<endl;
    cin>>n;

    (n%100== 0)?((n%400==0)?cout<<"yes":cout<<"no"):((n%4==0)?cout<<"yes":cout<<"no");
    return 0;
   
}