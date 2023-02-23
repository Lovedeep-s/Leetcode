//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8,9,10};
    int v = nums[0];
        int l = 0;
        int r = nums.size() - 1;

        while (l <= r)
        {
            if (nums[l] < nums[r])
            {
                v = min(v, nums[l]);
                break;
            }
            int m = l + (r - l) / 2;
            v = min(v, nums[m]);

            if (nums[m] >= nums[l]) 
            {
                l = m + 1; 
            }
            else
            {
                r = m - 1;
            }
        }

        return v;

}