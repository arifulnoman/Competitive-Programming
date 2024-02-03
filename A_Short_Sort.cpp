#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int count = 0;
    if(s[0] == 'a')
    {
        count++;
    }
    if(s[1] == 'b')
    {
        count++;
    }
    if(s[2] == 'c')
    {
        count++;
    }
    if(count < 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
    cout << endl;
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