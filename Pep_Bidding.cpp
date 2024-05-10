#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,total_attack_a = 0,total_attack_p = 0,total_def_a = 0,total_def_p = 0;
    cin >> n;
    vector<int> attack_a(n),attack_p(n),defense_a(n),defense_p(n);
    for(i = 0;i < n;i++)
    {
        cin >> attack_a[i];
        total_attack_a+=attack_a[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> defense_a[i];
        total_def_a+=defense_a[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> attack_p[i];
        total_attack_p+=attack_p[i];

    }
    for(i = 0;i < n;i++)
    {
        cin >> defense_p[i];
        total_def_p+=defense_p[i];
    }
    if(total_attack_a > total_attack_p && total_def_a > total_def_p)
    {
        cout << "A\n";
        return;
    }
    if(total_attack_a < total_attack_p && total_def_a < total_def_p)
    {
        cout << "P\n";
        return;
    }
    cout << "DRAW\n";
}

signed main()
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