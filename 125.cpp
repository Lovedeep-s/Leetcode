//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
string s = "A man, a plan, a canal: Panama";
string g;
for (int i = 0; i < s.length(); i++)
{
    if(isalnum(s[i]))
        {
            g.push_back(tolower(s[i]));
        }
    
}
char*p;
char*q;
 p=&g[0];
 q=&g[g.length()-1];
 int count=0;
//  cout<<s.length();
//  cout<<*(q+7);
    for (int i =0 ; i<g.length(); i++)
    {
        if (*p ==*q)
        {
            count++;
           
        }
         cout<<*p<<*q<<endl;
        p++;
        q--;

    }
    if (count==g.length())
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }

}