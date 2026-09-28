# include <iostream>
using namespace std;

int main(){

    int a,b,c,s,area;
    cout<<"enter sides of traingle"<<endl;
    cin>>a>>b>>c;

    
    s=(a+b+c)/2;

    area = (s*(s-a)*(s-b)*(s-c))^1/2;
    cout<<"your area is:"<<area<<endl;

    return 0;

    
    

}

