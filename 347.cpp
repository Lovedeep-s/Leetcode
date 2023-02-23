//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> nums;
vector<vector<int>> n;
int k =2;
nums.push_back(1);
nums.push_back(1);
nums.push_back(2);
nums.push_back(2);
nums.push_back(2);
nums.push_back(3);
int count = 1;
sort(nums.begin(),nums.end());

for (int i = 0; i < nums.size(); i++)
{
    if(i==nums.size()-1)
    {
            n.push_back({count,nums[i]});
        count=1;
    }
    else if(nums[i]==nums[i+1])
    {
        count++;
    }
    else if (nums[i]!=nums[i+1]){
        n.push_back({count,nums[i]});
        count=1;
    }
        
   
}
    

sort(n.begin(),n.end(),greater<vector<int>>());
vector <int>ans;
for (int i = 0; i < k; i++)
{
    ans.push_back(n[1][i]);
}

for (int i = 0; i < ans.size(); i++)
{
cout<<ans[i]<<" ";
}



return 0;
}