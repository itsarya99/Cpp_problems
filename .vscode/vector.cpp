#include<bits/stdc++.h>
using namespace std;

int main(){
   /* vector<int>arr;
    int n=5;
    
    for(int i=0;i<n;i++){
        int t;
    cin>>t;
    arr.push_back(t);
    

    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
    }
    return 0;
}*/

vector<int>v={1,2,3,4,5};
v.erase(v.begin()+2,v.begin()+4);

for(auto it:v){
    cout<< it<<" ";
}

}