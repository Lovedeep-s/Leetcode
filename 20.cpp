//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
bool strings();
int main()
{  
    int i;
    i=strings();
    cout<<i;

}
bool strings()
{
    string s = "([)]";
        stack <char>k;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='(' || s[i]=='{' || s[i]=='[')
        {
            k.push(s[i]);
        }
        else if (s[i]==')' || s[i]=='}' || s[i]==']')
        {
            if (k.empty())
            {
                return false;
            }
            else if (s[i]==')' && k.top()=='(')
            {
                k.pop();
            }
            else if (s[i]=='}' && k.top()=='{')
            {
                k.pop();
            }
            else if (s[i]==']' && k.top()=='[')
            {
                k.pop();
            }
            else
            {
                return false;
            }
        }
    }
    if (k.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}