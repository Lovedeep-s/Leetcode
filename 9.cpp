//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
int x=121;
string s = to_string(x);
if (x<0)
{
    return false;
}
for (int i = 0; i < s.length()/2; i++)
{
    if(s[i]!=s[s.length()-i-1])
    {
        return false;
    }

}
return true;

}