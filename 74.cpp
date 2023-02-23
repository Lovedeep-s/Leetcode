//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<vector<int>> nums={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
int target=3;
cout<<nums.size();
cout<<nums[0].size();
for (int i = 0; i < nums.size(); i++)
{
    for (int j = 0; j < nums[0].size(); j++)
    {
        if(nums[i][j]==target)
        {
            cout<<i<<j;
            break;
        }
    }
}

}