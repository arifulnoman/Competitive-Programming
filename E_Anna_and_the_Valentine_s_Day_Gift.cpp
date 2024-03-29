#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,m;
    cin >> n >> m;
    vector<int> v(n),total_length(n);
    vector<pair<int,int>> zero(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        string temp = to_string(v[i]);
        int last = temp.size() - 1;
        total_length[i] = last + 1;
        while(temp[last] == '0')
        {
            last--;
        }
        zero[i].first = total_length[i] - last - 1;
        zero[i].second = i;
    }
    sort(zero.rbegin(),zero.rend());
    for(i = 0;i < n;i+=2)
    {
        total_length[zero[i].second]-=zero[i].first;
    }
    int ans = 0;
    for(i = 0;i < n;i++)
    {
        ans+=total_length[i];
    }
    ans--;
    if(ans >= m)
    {
        cout << "Sasha\n";
        return;
    }
    cout << "Anna\n";
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