#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<ll> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    ll start = 0,end = n - 1,sum = 0,attack = 0;
    while(start < end)
    {
        if(sum == v[end])
        {
            attack++;
            v[end] = 0;
            end--;
            sum = 0;
            continue;
        }
        if(sum + v[start] <= v[end])
        {
            sum = sum + v[start];
            attack = attack + v[start];
            v[start] = 0;
            start++;
        }
        else
        {
            ll temp = v[end] - sum;
            sum = sum + temp;
            attack = attack + temp;
            v[start] = v[start] - temp;
        }
    }
    if(sum >= v[end] && v[end] > 0)
    {
        attack++;
    }
    else
    {
        if(v[end] == 1)
        {
            attack++;
        }
        else
        {
            ll temp = ceil((double)(sum + v[end]) / 2);
            attack = attack + temp - sum + 1;
        }
    }
    cout << attack << '\n';
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