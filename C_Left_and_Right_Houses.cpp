#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,mini = INF,ans = 0;
    string s;
    cin >> n >> s;
    mini = ((n + 1) / 2 + 1);
    vector<int> prefix_zero(n + 1),prefix_one(n + 1);
    for(i = 0;i < n;i++)
    {
        if(s[i] == '0')
        {
            prefix_zero[i + 1] = prefix_zero[i] + 1;
            continue;
        }
        prefix_zero[i + 1] = prefix_zero[i];
    }
    for(i = n - 1;i >= 0;i--)
    {
        if(s[i] == '1')
        {
            prefix_one[i] = prefix_one[i + 1] + 1;
            continue;
        }
        prefix_one[i] = prefix_one[i + 1];
    }
    int mid = 0;
    if(n & 1)
    {
        mid = (n + 1) / 2;
    }
    else
    {
        mid = n / 2;
    }
    for(i = 0;i < n + 1;i++)
    {
        if(i == mid && (n & 1))
        {
            mid--;
        }
        if(prefix_zero[i] >= (i + 1) / 2 && prefix_one[i] >= (n + 1 - i) / 2)
        {
            if(mini > abs(mid - i))
            {
                mini = abs(mid - i);
                ans = i;
            }
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
}