//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>nums={1,2,3,4};
vector<int>answer(nums.size(), 1);
int po=1,pr=1;
for (int i = 0; i < nums.size(); i++)
{
    answer[i]= pr;
    pr=pr*nums[i];
}

for (int j =nums.size()-1; j >=0; j--)
{
    answer[j]= answer[j]*po;
    po=po*nums[j];
}
for (int i = 0; i < answer.size(); i++)
{cout<<answer[i]<<" ";
}


}