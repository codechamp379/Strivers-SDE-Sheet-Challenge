#include <bits/stdc++.h> 
int distinctSubstring(string &word) 
{
    //  Write your code here.
    //logic: first take a char then start forming substring in inner loop
    // and put every substring to set
    unordered_set<string> ust;
    for(int i=0;i<word.size();i++)
    {
        string temp=""; //temp should be empty when i will be new
        for(int j=i;j<word.size();j++)
        {
           temp = temp + word[j];
           ust.insert(temp);
        }
    }
    return ust.size();
}
