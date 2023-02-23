//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main()
{
string s1="ab";
string s2="eidboaoo";
int count=0;
for (int i = 0; i < s2.size(); i++)
{
    if(s2[i]==s1[0]){
        count++;
    
    for (int j = 1; j < s1.size(); j++)
    { 
        if(s2[i]==s1[j]){
            count++;
            break;
        }
        

    }
    }
    else{
        continue;
    }
    if(count==s1.size()){
        cout<<"true";
        break;
    }
    else if(i==s2.size()-1){
        cout<<"false";
    }
    
}

}