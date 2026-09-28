#include<bits/stdc++.h>
using namespace std;


int main(){
    /*
    string str="abcd";
    int n =4;

    for(int i=0;i<=n;i++){
        while (i<n){
            swap(str[i],str[n-1]);
            i++,n--;

        }


    }
    cout<<str;
*/
/*
string str;
getline(cin,str);

string vowels="a,e,i,o,u,A,E,I,O,U";
int count =0;

for(int i=0;i<str.length();i++){
    for(int j=0;j<vowels.length();j++){
        if(str[i]==vowels[j]){
            count++;
        }

    }
    
}
cout<<count;

*/

/*string s;
getline(cin,s);
stringstream ss(s);
string t;
int count =0;
while(ss>>t)
{
    count++;



}cout<<count;

*/
/*
 string str="abba";
 string reverse;
 string original=str;
    int n =4;

    for(int i=0;i<=n;i++){
        while (i<n){
            swap(str[i],str[n-1]);
            i++,n--;

        }
        reverse=str;


    }
    if(original==reverse){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
*/

// string s;
// getline(cin,s);
// cout<<s.length();
    

// string s;
// cin>>s;
// for(int i=0;i<s.length();i++){
//     char x=toupper(s[i]);
//     cout<<x;
// }


// }

/*string s;
getline(cin,s);
char ch;
cin>>ch;
int count =0;
for(int i=0;i<s.length();i++){
    if(s[i]==ch){
        count++;
    }
}
cout<<count;
*/

string s;
getline(cin,s);
int count =0;
for(int i=0;i<s.length();i++){
    for(int j=0;j<s.length();j++){
        if(s[i]==s[j]){
            count++;
        }
       
       
    }
    
    }

   
}


}

