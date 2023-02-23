//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> numbers={2,7,11,15};
    int target=9;
    vector<int> ans;
    for (int i = 0; i < numbers.size(); i++)
    {
        for (int j = i+1; j < numbers.size(); j++)
        {
            if (numbers[i]+numbers[j]==target)
            {
                ans.push_back(i+1);
                ans.push_back(j+1);
            }
            
        }
        
    }
     

}