// This code is made by Lovedeep singh
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> height = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    int i = 0;
    int j = height.size() - 1;

    int maxLeft = height[i];
    int maxRight = height[j];

    int result = 0;

    while (i < j)
    {
        if (maxLeft <= maxRight)
        {
            i++;
            maxLeft = max(maxLeft, height[i]);
            result += maxLeft - height[i];
        }
        else
        {
            j--;
            maxRight = max(maxRight, height[j]);
            result += maxRight - height[j];
        }
    }

    return result;
}