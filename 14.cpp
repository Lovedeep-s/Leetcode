//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
string main()
{
vector<string> strs={"flower","flow","flight"};
if (strs.size()==0)
    return "";
int ans =INT_MAX;
for (int i = 0; i < strs.size(); i++)
{
    ans = min(ans, (int)min(strs[i].size(), strs[i+1].size()));
            while(strs[i].substr(0, ans) != strs[i+1].substr(0, ans)){
                ans--;
            }
            if(ans == 0)return "";
        }
        return strs[0].substr(0, ans);

}