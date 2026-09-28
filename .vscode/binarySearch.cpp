#include <iostream>
using namespace std;

int binary_search(int start,int end,int arr[], int val){
    int mid=(start+end)/2;
    if(arr[mid]==val){
        return mid;
    }
    else if(arr[mid]>val){
        return binary_search(mid-1,end,arr,val);
    }
    else 
    {
        return binary_search(mid+1,end,arr,val);
    }


}
int main(){
   
    
    int val;
    cin>>val;
    int n=5;
    int arr[]={3,4,5,2,5};
   
    cout<<binary_search(0,n-1,arr,val);
    return 0;

}

