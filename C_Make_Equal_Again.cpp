#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,temp;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int start = 0,end = n - 1;
    temp = v[0];
    while(v[start + 1] == temp && start + 1 < n)
    {
        start++;
    }
    temp = v[end];
    while(v[end - 1] == temp && end - 1 >= 0)
    {
        end--;
    }
    if(start >= end)
    {
        cout << 0 << '\n';
        return;
    }
    if(v[start] == v[end])
    {
        cout << end - start - 1 << '\n';
        return;
    }
    cout << n - 1 - max(start,n - 1 - end) << '\n';
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