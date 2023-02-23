//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<string> strs;
strs.push_back("eat");
strs.push_back("tea");
strs.push_back("tan");
strs.push_back("ate");
strs.push_back("nat");
strs.push_back("bat");
vector<vector<string>> ans;
unordered_map<string,vector<string>> mp;
for(string s:strs)
{
string t = s;
sort(t.begin(),t.end());
mp[t].push_back(s);

}
for(auto n:mp)
{
ans.push_back(n.second);
}
for(int i =0;i<ans.size();i++)
{
for(int j =0;j<ans[i].size();j++)
{
cout<<ans[i][j]<<" ";
}
cout<<endl;
}
}