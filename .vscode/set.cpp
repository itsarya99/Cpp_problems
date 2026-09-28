#include <bits/stdc++.h>
using namespace std;

int main(){
    //intersection of multiple arrays
    //given n arrrays nums each holding m unique positive integers print a list of integers that are present in each array of nums sorted in ascending order


    int n,m;
    cin>>n>>m;
    int nums[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>nums[i][j];
        }
    }
    //2d array because we have n arrays each of size m means we have n rows and m columns
    //we can use set to find intersection of multiple arrays steps are as follows
    /*
    1. Insert all elements of the first array into a set
    2. For each subsequent array, find the intersection of the current set with the elements of the array
    3. Continue until all arrays are processed
    */

    set<int> s;
    //step 1
    for(int i=0;i<m;i++){
        s.insert(nums[0][i]);
    }

    //this step means we will find the intersection of the current set with the elements of the array
    //then we will update the set with the intersection of the current set and the elements of the array
    //step 2
    for(int i=1;i<n;i++){
        set<int> temp;
        for(int j=0;j<m;j++){
            if(s.count(nums[i][j])){ //if the element is present in the current set then we will insert it into the temp set because we want to find the intersection of the current set and the elements of the array
//another way
                //we use s.end() to check if the element is present in the current set or not if it is present then we will insert it into the temp set because we want to find the intersection of the current set and the elements of the array
                temp.insert(nums[i][j]);
            }
        }
        s = temp;
    }
    //in this step we are performing the intersection of the current set with the elements of the array and updating the set with the intersection of the current set and the elements of the array
//this step means we will print the elements of the set in sorted order
    //step 3
    for(auto it:s){
        cout<<it<<" ";
    }
    cout<<endl;



}
class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        int d=nums.size();
        vector<int>v;
        set<int>res(nums[0].begin(),nums[0].end());
        for(int i =1;i<d;i++){
            set<int>curr(nums[i].begin(),nums[i].end());
            set<int>temp;
            set_intersection(res.begin(),res.end(),curr.begin(),curr.end(),inserter(temp,temp.begin()));
            res=temp;
        }
        vector<int>ans(res.begin(),res.end());
        return ans;
    }
};