#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,sum = 0,carry = 0;
    string s,res;
    cin >> n >> s;
    for(i = 0;i < n;i++)
    {
        sum+=s[i] - '0';
    }
    for(i = n - 1;i >= 0;i--)
    {
        res.push_back('0' + (sum + carry) % 10);
        carry = (sum + carry) / 10;
        sum-=s[i] - '0';
    }
    res.push_back(carry + '0');
    while(res.back() == '0')
    {
        res.pop_back();
    }
    reverse(res.begin(),res.end());
    cout << res << endl;
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