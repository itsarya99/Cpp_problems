#include <iostream>
using namespace std;
//for simple pyramid
/*int main(){
    for(int i = 0;i<5;i++){
        for(int j=0;j<=i;j++)
            cout<<"*";
        cout<<endl;
    }return 0;
}*/

//inverted pyramid

int main(){
    for(int i =0;i<5;i++){

        for(int j=4;j>=i;j--){
            cout<<"*";

        }cout<<endl;

    }
    return 0;

}


