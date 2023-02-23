//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;

class MinStack {
 int t;
 vector <int>arr;
public:
    MinStack() {
        t=-1;
    }
    
    void push(int val) {
        t++;
        arr.push_back(val);       
    }
    
    void pop() {
        if(t!=-1)
        {
        t--;
        }        
    }
    
    int top() {
        return arr[t];
        if(t==-1)
        {
            return 0;
        }
        
    }
    
    int getMin() {
        if (t==-1)
        {
            return 0;
        }
        else
        { int min;
            min =arr[0];
            for(int i=0;i<= t;i++)
            {
                if (min>arr[i])
                {
                    min=arr[i];
                }
            }
            return min;
        }
    }
};
int main(){


}