#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) 
{
	// Write your code here.
	vector<vector<int>> res;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-2;i++)
	{
		if(i > 0 && arr[i]==arr[i-1]) //removing so that repeatition na ho
		  continue; 
		int j = i+1;
		int k = n-1;
		while(j<k)
		{
            int sum = arr[i] + arr[j] + arr[k];
		    if(sum == K)
		    {
			  res.push_back({arr[i],arr[j],arr[k]});
			  j++;
			  while(j < k && arr[j]==arr[j-1])
			  {
				j++;
			  }
		    }
		    else if(sum > K)
		      k--;
			else
			  j++;
		}
	}
    return res;
}