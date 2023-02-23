//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> nums={-1,0,3,5,9,12};
int target = 2;
for (int i = 0; i < nums.size(); i++)
{
    if(nums[i]==target)
    {
        return i;
        break;
    }
}
return -1;

}