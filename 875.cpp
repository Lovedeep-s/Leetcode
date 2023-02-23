// This code is made by Lovedeep singh
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> piles = {3, 6, 7, 11};
    vector<int> wait = piles;
    int h = 8;
    int n = *max_element(piles.begin(), piles.end());
    if (piles.size() == h)
        return n;
    int k = 1;
    int i = 0;
    int j = 0;
    int v=0;

    while (k < n)
    {
        if (*max_element(piles.begin(), piles.end()) != 0 && piles[i] <= 0)
        {
            i++;
            if (i == piles.size())
            {
                i = 0;
            }
            continue;
        }
        piles[i] = piles[i] - k;
        i++;
        j++;
        if (i == piles.size())
        {
            i = 0;
        }
        if (*max_element(piles.begin(), piles.end()) <= 0)
        {
            if (j <= h)
            {
                v=k;
                break;
            }
            else
            {
                
                k++;
                i = 0;
                j = 0;
            }
                piles = wait;
            
        }
    }cout<<v;

}