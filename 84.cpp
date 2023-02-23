//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>height={2,1,5,6,2,3};
    int max=0;
    int area=0;
    for (int i = 0; i < height.size(); i++)
    {
        for (int j = i+1; j < height.size(); j++)
        {
            if(height[i]>height[j]){
                area=height[j]*(j-i);
            }
            else{
                area=height[i]*(j-i);
            }
            if(area>max){
                max=area;
            }
        }
        
    }
    cout<<max;
}