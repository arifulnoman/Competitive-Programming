#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    string s;
    cin >> n >> s;
    int first_a = -1,last_b = -1;
    for(i = 0;i < n;i++)
    {
        if(s[i] == 'A' && first_a == -1)
        {
            first_a = i;
        }
        if(s[i] == 'B')
        {
            last_b = i;
        }
    }
    if(first_a == -1 || last_b == -1 || first_a > last_b)
    {
        cout << 0 << '\n';
        return;
    }
    cout << last_b - first_a << '\n';
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