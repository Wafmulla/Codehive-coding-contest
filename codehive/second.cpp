//PROBLEM 2

// On the lush alien world of Pandora live the Na'vi beings who appear primitive but are highly evolved.
// Doctor Grace runs a project which allows humans to transform in Avatar. Jake a paralyzed former Marine becomes mobile again through one such Avatar. Jake has been given a mission to become friends with the Na'vi people by transforming into Avatar.
// The project runs for N days where on each day Jake can transform into Avatar for a specific amount of time. Through her experience, Doctor Grace can predict the transformation time of Jake for maximum K days. After each prediction, the next prediction occurs after F days.
// Find the maximum Avatar time in each prediction.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
      long long int n;
        long long int k;
        long long int f;
        cin>>n>>k>>f;
        vector<int>a;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
          auto it=a.begin();int q=0;
        double d;
        if(n%f==0)d=n/f;
        else d=(n/f)+1;
        for(int i=0;i<d;i++)
        {
          if(q+k<=n)
            cout<<*max_element(it,it+k)<<" ";
            else cout<<*max_element(it,a.end())<<" ";
            it=it+f;q+=f;
        }
        cout<<endl;
    }
    return 0;
}
