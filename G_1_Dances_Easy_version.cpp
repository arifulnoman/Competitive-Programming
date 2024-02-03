#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,m,count = 0;
    cin >> n >> m;
    vector<int> v1(n),v2(n);
    v1[0] = 1;
    for(i = 1;i < n;i++)
    {
        cin >> v1[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> v2[i];
    }
    i = 0,j = 0;
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    while(i < n && j < n)
    {
        if(v1[i] >= v2[j])
        {
            j++;
        }
        else
        {
            count++;
            i++;
            j++;
        }
    }
    cout << n - count << '\n';
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