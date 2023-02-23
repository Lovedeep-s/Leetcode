//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> nums={-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    sort(nums.begin(),nums.end());
    int j=1;
    int k=nums.size()-1;
 for (int i = 0; i < nums.size(); i++)
 {
    if(i==k&&j==k){
        continue;
    }
    else{
            if (nums[i]+nums[j]+nums[k]==0)
            {
                vector<int> temp;
                temp.push_back(nums[i]);
                temp.push_back(nums[j]);
                temp.push_back(nums[k]);
                ans.push_back(temp);
                j++;
                k--;
                if(nums[j]==nums[j-1]){
                    j++;
                }
                if(nums[k]==nums[k+1]){
                    k--;
                }

           }
    }
 }
        
    
    

 for (int i = 0; i < ans.size(); i++)
 {
    cout<<ans[i][0]<<" "<<ans[i][1]<<" "<<ans[i][2]<<endl;
 }
 
 

    
    
    
}