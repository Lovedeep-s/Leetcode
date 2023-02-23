//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
string s="abcabcbb";
int count=0;
for (int i = 0; i < s.length(); i++)
{
    vector<char> v;
    for (int j = i; j < s.length(); j++)
    {
        if (find(v.begin(),v.end(),s[j])==v.end())
        {
            v.push_back(s[j]);
        }
        else
        {
            break;
        }
        
    }
    if (v.size()>count)
    {
        count=v.size();
    }
    
}
cout<<count;
}