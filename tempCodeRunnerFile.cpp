//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
string s="abcabcbb";
vector<char> v;
sort(s.begin(),s.end());

for (int i = 0; i < s.length(); i++) {
    if (s[i] != s[i + 1]) {
        v.push_back(s[i]);
}
}
cout<<v.size();
}