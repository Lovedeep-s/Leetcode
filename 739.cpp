// This code is made by Lovedeep singh
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> temperature = {30, 40, 50, 60};
    vector<int> ans(temperature.size(), 0);
    // for (int i = 0; i < temperature.size(); i++)
    // {
    //     int count=0;
    //     for (int j = i+1; j < temperature.size(); j++)
    //     {
    //         if(temperature[j]>temperature[i]){
    //             count++;
    //             break;
    //         }
    //         else{
    //             count++;
    //         }
    //     }
    //     if(count==temperature.size()-i-1&&temperature[i]>=temperature[temperature.size()-1]){
    //         ans.push_back(0);
    //     }
    //     else{
    //         ans.push_back(count);
    //     }
    // }

    stack<pair<int, int>> stk;
    for (int i = 0; i < temperature.size(); i++)
    {
        int c = i;
        int ct = temperature[i];
        while (!stk.empty() && stk.top().second < ct)
        {
            ans[stk.top().first] = i - stk.top().first;
            stk.pop();
        }
        stk.push({c, ct});
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}