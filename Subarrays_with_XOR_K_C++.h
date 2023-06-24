#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    /*    Write your code here.
    logic :   <------------->xor = xr
              <-----><------>                        
               xor=X   xor=K   if you find X in hashmap means you found subarray */
    unordered_map<int,int> ump;
    ump[0] = 1;
    int xorr=0;
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
       xorr=xorr^arr[i];
       if(ump.find(xorr^x) != ump.end())
       {
           count +=ump[xorr^x];
       }
       ump[xorr]++;
    }
    return count;
}