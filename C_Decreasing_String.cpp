#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    ll n;
    string s;
    cin >> s >> n;
    ll i = s.size(),len = 0,count = -1,prev = 0;
    while(len < n && i > 0)
    {
        prev = len;
        len = len + i;
        i--;
        count++;
    }
    string temp;
    for(i = 0;i < s.size();i++)
    {
        if(temp.size() == 0)
        {
            temp.push_back(s[i]);
            continue;
        }
        if(s[i] < temp.back() && count > 0)
        {
            while(temp.back() > s[i] && count > 0)
            {
                temp.pop_back();
                count--;
            }
            temp.push_back(s[i]);
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    while(count > 0)
    {
        temp.pop_back();
        count--;
    }
    cout << temp[n - prev - 1];
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