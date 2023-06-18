#include <bits/stdc++.h>

string fourSum(vector<int> arr, int target, int n) 
{
    // Write your code here.
    unordered_map<int,pair<int,int>> ump; //contains sum and pair of indices of no.s
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           ump[arr[i] + arr[j]] = {i,j}; 
        }
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int sum = arr[i] + arr[j];
            if(ump.find(target-sum)!= ump.end())
            {
               pair<int,int> itr = ump[target-sum];
               if(itr.first != i && itr.first != j && itr.second != i && itr.second != j)
               {
                   return "Yes";
               } 
            }
        }
    }
    return "No";
}
