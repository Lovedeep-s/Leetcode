//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> tokens={"4","13","5","/","+"};
    stack<int> st;
   for (int i = 0; i < tokens.size(); i++) {
            string token = tokens[i];
            
            if (token.size() > 1 || isdigit(token[0])) 
            {
                st.push(stoi(token));
                continue;
            }
        
        else
        {
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
           if (token=="+")
                st.push(a+b);
            else if (token=="-")
                st.push(a-b);
            else if (token=="*")
                st.push(a*b);
            else if (token=="/")
                st.push(b/a);
        }
        }
    
    cout<<st.top();

}