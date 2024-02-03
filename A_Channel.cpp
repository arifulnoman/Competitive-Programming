#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,a,q,partial = 0;
    string s;
    cin >> n >> a >> q >> s;
    partial = a;
    for(i = 0;i < q;i++)
    {
        if(a >= n)
        {
            cout << "YES" << '\n';
            return;
        }
        if(s[i] == '+')
        {
            partial++;
            a++;
        }
        else
        {
            a--;
        }
    }
    if(a >= n)
    {
        cout << "YES" << '\n';
        return;
    }
    if(partial >= n)
    {
        cout << "MAYBE" << '\n';
        return;
    }
    cout << "NO" << '\n';
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