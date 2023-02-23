//This code is made by Lovedeep singh
#include<bits/stdc++.h>
using namespace std;
int main(){
 vector<int> heights={1,8,6,2,5,4,8,3,7};
    int maxarea=0;
    int i=0;
    int j=heights.size()-1;
    while(i<j){
        maxarea=max(maxarea,min(heights[i],heights[j])*(j-i));
        if(heights[i]<heights[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return maxarea;
}