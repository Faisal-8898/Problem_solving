#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    int ma = 1;
    for (int i = 0; i < n.length(); i++)
    {
        int a = 1;
        while (n[i] == n[i + 1])
        {
            a++;
            i++;
        }
        ma = max(ma, a);
    }

    cout << ma;
}