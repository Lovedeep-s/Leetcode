//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;

void generate(int n, int open, int close, string str ,vector<string>& result) ;
int main()
{
int n =3;
vector<string>ans;
generate(n,0,0,"",ans);

}
void generate(int n, int open, int close, string str ,vector <string>& result) 
{
        if (open == n && close == n) {
            result.push_back(str);
            return;
        }
        if (open < n) {
            generate(n, open + 1, close, str + '(', result);
        }
        if (open > close) {
            generate(n, open, close + 1, str + ')', result);
        }
    }