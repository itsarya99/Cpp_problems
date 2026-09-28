#include<bits/stdc++.h>
using namespace std;


    /* fact(int n){
        if(n==1||n==0){
            return 1;
        }return n*fact(n-1);
    }
    int main(){
       
        cout<<fact(4);
        return 0;
    }*/

    /*int sumofDigits(int n){
        int num =n;
        if(n==0){
            return 0;

        }else{
            return n%10+sumofDigits(n/10);
        }
        
    }
    int main(){
        int n;
        cin>>n;
        cout<<sumofDigits(n);
    }
        */
/*
    int fabo(n){


        int a=0;
        int b=1;
        int c=a+b;
        for(int i=2;i<n-2;i++){

            cout<<c;
            a=b;
            b=c;

        }
        


    }
       


    int main(){
        int n;
        cin>>n;
        cout<<fabo(n);
    }
    */

    //write a program to find sum of n natural no. using recursion

    
    /* int sum(int n){
        if(n==0){
            return 0;
        }
        else if(n==1){
            return 1;
        }
            return n+sum(n-1);

    }

    int main(){
        int n=10;
         cout<<sum(n);
        return 0;
    }

    */

    //write a program to reverse and array using recursion

    /*void reverse(int arr[],int n){
        if(n==0){
            return ;
        }
        cout<<arr[n-1]<<" ";
        reverse(arr,n-1);
           
        }
      
    



    
    int main(){
        int n;
        cin>>n;
        
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        reverse(arr,n);
    }
        */

        /*int pow(int n){
            return (pow(n,n));
        }

        int main(){
            int n;
            cout<<"enter n";
            cin>>n;
            cout<<pow(n);
        }
            */

           /* int count(int n){
                if(n==0){
                    return 0;
                }

                return 1+count(n-1);

            }

        int main(){
            int n=1234;
            cout<<count(n);

        }

        */

        //write a program to find largest element in an array using a function
        //write a function to search a element in the array;
        //write a function to remove duplicate values from a sorted array
        //write a program to check if an array is sorted or not
         

        /*int max(int arr[],int n,int largest){
            for(int i=0;i<n;i++){
                if(arr[i]>largest){
                    largest+=arr[i];
                }

            }
            return largest;
                }
        int main(){
            int n=5;
            int largest =-1;
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }

            cout<<max(arr,n,largest);
            return 0;
        }
        */

      /**void search(int arr[], int t, int n, bool &flag)
{
   
    for(int i=0;i<n;i++)
    {
       if(arr[i] == t)
       {
         flag= true;
       }
    }
}


        int main(){
            int n=5;
            int t=5;

        
            
            int arr[n];
            for(int i=0;i<n;i++){
                cin>>arr[i];
            }
           bool flag=false;
            cout<<endl;
            search(arr, 5, n, flag);
        if(flag)
    {
        cout<<"present"<<endl;
    }
    else cout<<"not present"<<endl;

        }
    */

    

    int main(){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());

        for(int i =0;i<n;i++){

            

        }
        





        




        
        

        
        

          
    }











