//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s,t;
char k;
s="lovedeep";
t ="peedevol";
if (s.size() != t.size())
            return false;
        unordered_map<char,int> kmap;
        unordered_map<char,int> jmap;
        for(int i =0 ; i<s.length();i++)
            {
                kmap[s[i]]++;
                jmap[t[i]]++;
            }
        for(int i=0;i<s.length();i++)
        {
            if(kmap[i]!= jmap[i])
            cout<<"false";
        }
        cout<<"true";
    }