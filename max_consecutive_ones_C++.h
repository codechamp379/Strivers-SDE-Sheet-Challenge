int longestSubSeg(vector<int> &arr , int n, int k)
{
    // Write your code here.
    int zero_count = 0;
    int i=0;
    int j=0;
    int max_len = 0;
    while(j<n)
    {
       if(arr[j]==1)
       {
            if((j-i+1) > max_len)
               max_len = j-i+1;
            j++;
       }
       else
       {
           zero_count++;
           if(zero_count <= k)
           {
              if((j-i+1) > max_len)
                max_len = j-i+1; 
           }
           else
           {
               while(zero_count > k && i<j)
               {
                    if(arr[i]==0)
                      zero_count--;
                    i++;
               }
           }
           j++;
       }
    }
    return max_len; 
}
