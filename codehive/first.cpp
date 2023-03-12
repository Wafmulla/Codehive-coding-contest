//PROBLEM 1

// Neytiri wants to create multiple copies of target word. Since there are no printers on Pandora, they use cutouts of characters available with them to create copies.
// You have to help her find out the maximum number of copies of the target word she can create by rearranging characters that are available with her.
// Formally, You are given a string S, where each character is a small english alphabets. Output how many maximum copies of target string T you can create using character from string S.


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
#include<string.h>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    string s;
    string t;
    cin>>s;
    cin>>t;
    map<char,long long int>m;
     map<char,long long int>m1;
    for(long unsigned int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
     for(long unsigned int i=0;i<t.length();i++)
    {
        m1[t[i]]++;
    }
    vector<int>v;
    for(auto it=m.begin();it!=m.end();it++)
    {
        for(long unsigned int i=0;i<t.length();i++)
        {
            if(it->first==t[i])
            {
                long long int p;
                p=it->second/m1[t[i]];
                v.push_back(p);
            }
        }
    }
    sort(v.begin(),v.end());
    cout<<v.at(0);
    
    return 0;
}
