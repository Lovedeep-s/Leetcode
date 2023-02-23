//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
 vector <int> nums={100,4,200,1,3,2};
set<int>s;
for (int i = 0; i < nums.size(); i++)
{
    s.insert(nums[i]);

}
int count=0;
int max=0;
for (auto i = s.begin(); i != s.end(); i++)
{
    if(*i+1==*(++i)){
        count++;
        i--;
    }
    else{
        if(count>max){
            max=count;
        }
        count=0;
    }
}
cout<<max+1;
}