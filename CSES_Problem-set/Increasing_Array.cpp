#include <bits/stdc++.h>
using namespace std;
int main()
{long long n,count=0,ans=0;
    cin >> n;
    vector<long long> vec;
    for (long long i = 0; i < n; i++)
    {
        long long x;
        cin >> x;
        vec.push_back(x);
    }
    for (long long i = 0; i < n-1; i++)
    {
        if(vec[i]>vec[i+1]){
             ans+=abs(vec[i]-vec[i+1]);
             vec[i+1]=vec[i];
        }
    }
    cout << ans;
}