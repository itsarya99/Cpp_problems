#include<bits/stdc++.h>
using namespace std;

int main(){
     string s1="arya";
     string s2="shukla";

    // cout<<(s1.append(s2));

// wap to replace/copy data of one string to another

// string s4;
// s4.assign("new string");
// cout<<"assign"<<" "<<s4<<endl;

// s1.assign(s2,0,6);
// cout<<"after assignment"<<" "<<s1<<endl;


//at function =is used to print index of a string 

// cout<<s2;
// cout<<"character at index 5"<<s2.at(5);


//use to add character
s1.push_back('!');
cout<<"after push back"<<" "<<s1<<endl;
//used to remove last character
s1.pop_back();
cout<<"after pop back"<<" "<<s1<<endl;

//used to insert text
s1.insert(2,"aa");
cout<<"after inserting"<<s1<<endl;

//used to erase character at any index
s1.erase(2,2);
cout<<"erase"<<" "<<s1<<endl;

cout<<"\n8.replace()\n";
s1.replace(0,2,"hi");
cout<<"after replace"<<" "<<s1<<endl;

//function is used to substract string.

//basicaly given index se suru krke ..utta length tk extract krke de dega


cout<<s1<<endl;
cout<<s2<<endl;
cout<<"substracting (index 1,length 2)"<<" "<<s2.substr(1,3)<<endl;

















}








