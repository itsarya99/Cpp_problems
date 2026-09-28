#include<iostream>
using namespace std;

/*write a program to print a string using a character array*/

// int main(){

//     int n;
//     cin>>n;
//     char arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
//     return 0;





// }

/* a string is a sequence of character terminated by a null character
string in c++ can be defined in two ways
1. c style string using character array
2. using string class provided in c++ standard library

geltine function is used to take input of string with spaces
till the newline character is encountered
*/
/*wap to take a input by user using  a getline*/
// int main(){
//     string st;
//     getline(cin,st);
//     cout<<st;
//     return 0;
// }

/* wap to take input of your name and surname but give output of only name*/
// int main(){
//     string name;
//     getline(cin,name,'&');
//     cout<<name;
//     return 0;
//}
/*ignore is used to clear unwanted character usually the leftover new line from the input buffer*/

// wap to take input of age and name and print both

// int main(){
//     int age;
    
//     string name;
//     getline(cin,name);
//     cin>>age;
//     cin.ignore(); /*ignore is used to clear unwanted character usually the leftover new line from the input buffer
//     next line  krne ke baad bhi print krega*/
    
    
//     cout<<name<<" "<<age;
//     return 0;
// }
/*wap to take input from user without getline with spaces*/
// int main(){
    
//     string name;
//     cin>>name;
//     cin.ignore();
//     cout<<name<<endl;
//     /*to compute length of string use lenghth() or size() function 
//     */
//    cout<<name.length();
//    return 0;
// }
/*wap to concatenate two string*/
// int main(){
//         string first;
//         string second;
//         getline(cin,first);
//         getline(cin,second);
        
//         string full = first +" " + second;
//         cout<<full;
//         return 0;
//     }
/*differentiate btw character array and string*/


/*recursion : recursion is a technique where function calls itself to solve a program(SLOWER)
iteration: is a technique where a set of statements is repeated using loops(FASTER)

2.
VALUE passed to a function at the time of functiin call
present in calling function

formal arguments
variables that recieves values in the fucntion definition 
present in thee called function

3.
 function declaration:- 
 tells the compiler about the function name return tyoe anf paramets 
 also called function prototype

 function definitions 
 contains the actual body(logic) of the function

 example

 #include<stdio.h>

 int sum(int,int);//function declation

 int main(){
 cout<<sum(3,4)
 return 0;
 int

 
 }

*/  
//binary search


// int main(){
//     int arr[]={1,3,5,7,9,11};
//     int n=6;
//     int key=7;

//     int start =0;
//     int end=n-1;
//     while(start<=end){
//         int mid=(start+end)/2;
//         if(arr[mid]==key){
//             cout<<"found at index"<<mid;
//         }
//         else if(arr[mid]<key)
//                start=mid+1;
//                else{
//                 end=mid-1;
//                }
            
//         }cout<<"not found";
        
//     


    // cout<<"hello world";
    // return 0;

    // int a,b;
    // cin>>a>>b;
//     char op;
//   switch (op)
//   {
//   case '+':
//     cout<<a+b;
//     break;
//   case
//     '-':
//         cout<<a-b;
//         break;
//   default:
//     break;
//   }
// }

//array questions
//wap to find second largest element in an array
//wap to find second smallest element in an array
//wap to find sum of even and odd indexed element in an array

//wap to find minimum element in an array
//wap to find maximum element in an array
//wap to find sum of all elements in an array


//wap to reverse an array

//wap to find the unique element in an array where every element is repeated twice except one
void dosomething(int a,int b,int &sum){
    sum =a+b;
    cout<<"kutta"<<sum;

}
int main(){
    int a,b;
    cin>>a>>b;
    int sum =35;
    dosomething(a,b,sum);
    cout<<"sum"<<sum;

}


//wap to find the union and intersection of two arrays

//wap to find the missing number in an array of n-1 elements where the elements are in range of 1 to n

//wap to find the subarray with given sum

//wap to find the longest consecutive sequence in an array

//wap to find the majority element in an array

//wap to find the kth largest and kth smallest element in an array

//wap to find the number of pairs in an array with a given sum
//wap to find the longest increasing subsequence in an array
//wap to find the longest common subsequence in two arrays
//wap to find the longest common prefix in an array of strings
//wap to find the longest common suffix in an array of strings
//wap to find the longest palindromic substring in a string
//wap to find the longest palindromic subsequence in a string
//wap to find the longest substring without repeating characters in a string
//wap to find the longest substring with at most k distinct characters in a string
//wap to find the longest substring with at least k repeating characters in a string
//wap to find the longest substring with at most k distinct characters in a string
//wap to find the longest substring with at least k repeating characters in a string




