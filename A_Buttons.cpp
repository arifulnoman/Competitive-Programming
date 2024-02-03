#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(c & 1)
    {
        a++;
    }
    if(a > b)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }
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