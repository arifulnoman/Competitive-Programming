#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,zero_a = 0,zero_b = 0,count = 0;
    cin >> n;
    vector<int> v(n),v2(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> v2[i];
    }
    for(i = 0;i < n;i++)
    {
        if(v[i] == 0)
        {
            zero_a++;
        }
        if(v2[i] == 0)
        {
            zero_b++;
        }
        if(v[i] != v2[i])
        {
            count++;
        }
    }
    if(count == 0)
    {
        cout << 0;
    }
    else if(zero_a == zero_b)
    {
        cout << 1;
    }
    else if(abs(zero_a - zero_b) == count)
    {
        cout << abs(zero_a - zero_b);
    }
    else
    {
        cout << abs(zero_a - zero_b) + 1;
    }
    cout << '\n';
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