#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,d,s,mini = INF;
    cin >> n;
    for(i = 0;i < n;i++)
    {
        cin >> d >> s;
        int x = d + (s - 1) / 2;
        if(x < mini)
        {
            mini = x;
        }
    }
    cout << mini << endl;
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