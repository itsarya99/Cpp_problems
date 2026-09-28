#include<iostream>
using namespace std;

/*int main(){
    for(int i=0;i<4;i++){

        for(int j=0;j<4;j++){
            cout<<"*";

        }
        cout<<endl;
    }
    return 0;


}*/

// int main(){
//     for(int i = 0;i<4;i++){
//         for(int j =0;j<4;j++){
//             if(i==0||i==3||j==0||j==3){
//                 cout<<"*";
//                 else{
//                     cout<<" ";

//                 }
//                 cout<<endl;
//             }
//         }
        
//     }
// }

// int main(){
//     for(int i=0;i<5;i++){
//         for(int j=0;j<i;j++){
//             cout<<"*";
//         }cout<<endl;
//     }return 0;
// }

int main(){
    for(int i=5;i>0;i--){
        for(int j =1;j<=5;j++){
            if(j>=i)
            cout<<"*";
        }
       cout<<endl; 
    }return 0;
}