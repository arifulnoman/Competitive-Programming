#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k;
    string s;
    cin >> n >> k >> s;
    map<char,int> m;
    for(i = 0;i < n;i++)
    {
        m[s[i]]++;
    }
    k = n - k;
    if(k & 1)
    {
        k--;
    }
    if(k == 0)
    {
        cout << "YES" << endl;
        return;
    }
    for(auto it : m)
    {
        if((it.second & 1) == 0)
        {
            if(k > it.second)
            {
                k = k - it.second;
            }
            else
            {
                k = 0;
                break;
            }
        }
        else
        {
            if(k > it.second)
            {
                k = k - it.second + 1;
            }
            else
            {
                k = 0;
                break;
            }
        }
    }
    if(k == 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
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