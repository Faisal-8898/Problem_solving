#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, mid;
    cin >> n;

    vector<long long> arr;
    for (long long i = 0; i < n - 1; i++)
    {
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(), arr.end());
    for (long long i = 0; i < n; i++)
    {
        if (arr[i] != (i + 1))
        {
            cout << i + 1;
            return 0;
        }
    }
}
