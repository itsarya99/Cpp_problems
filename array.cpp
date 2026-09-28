#include <iostream>
using namespace std;

//int main(){
                                                           
   /* int a[6]={1,2,3,4,5,6};
    cout<<a[1]<<a[3]<<a[5]<<endl;
    return 0;*/

    /*int n;
    cout<<"enter n";
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++){
        
      cin>>arr[i];
      cout<<arr[i];
       
    } 
    return 0;
    */
   /*int a[6]={1,2,3,4,5,6};
   int size=5;
   int even= a[0]+a[2]+a[4];
   int odd = a[1]+a[3]+a[5];
   int sum = even+odd;
   cout<<sum<<endl;*/

   /*int a[6];
   int size =6;
   int even_sum=0;
    int odd_sum =0;
   for(int i =0;i<size;i++){
    if(i%2==0){
        cin>>a[i];
        even_sum= even_sum+a[i];
    }
    if(i%2!=0){
        cin>>a[i];
        odd_sum=odd_sum+a[i];

    }


    
   }
   cout<<even_sum<<endl;
   cout<<odd_sum<<endl;
   cout<<"total sum is:"<<even_sum+odd_sum;
   return 0;
   */
   /*int a[6]={2,5,7,8,4,1};
   int size=6;
   int min=INT16_MAX;

    for(int i=0;i<size;i++){

        if(a[i]<INT16_MAX){
            min=a[i];

        }
    }cout<<min<<endl;
    return 0; */

   /*int a[3]={5,2,9};
    int size= 3;
    int largest=INT8_MIN;

    for(int i =0;i<size;i++){
        if(a[i]>INT8_MIN){
            largest = a[i];
        }
        
    }cout<<"largest"<<largest<<endl;
    return 0;
    */
    
    /*int a[3]={3,5,2};
    int size = 3;
    int rev =0;

    for(int i =2;i>=0;i--){
        
        int d=a[i]%10;
        rev = rev*10+d;
        a[i]/=10;


        
    }
    cout<<rev<<endl;
    return 0;
    */

    
#include <bits/stdc++.h>
using namespace std;

 int main(){

	// your code goes here
	/*vector<int>v;
	int n ;
	cout<<"enter size";
	cin>>n;
	
	cout<<"enter elements:";
	for(int i=0;i<n;i++){
	    int x;
	    cin>>x;
	    v.push_back(x);
	}
    v.erase(v.begin()+2);

	cout<<"vector elements:";
	for(int i =0;i<v.size();i++){
	    cout<<v[i]<<"";
	}
	*/
//     vector<int>v;
//     int n;
//     cout<<"enter size";
//     cin>>n;

//     cout<<"enter elements";
//     for(int i =0;i<n;i++){
//         int x;
//         cin>>x;
//         v.push_back(x);
//     }
//     v.clear();

//     cout<<"vector elements";
//     for(int i =0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }

    

// }

//second largest element in array

int arr[5]={2,3,4,6};
int largest=arr[0];
int secondlargest;

for(int i=0;i<5;i++){
    if(arr[i]>largest){
        largest=arr[i];
    }
}
for(int i=0;i<5;i++){
    if(arr[i]>secondlargest && arr[0]!=largest){
        secondlargest=arr[0];
    }
}
cout<<secondlargest;
return 0;
 }




   