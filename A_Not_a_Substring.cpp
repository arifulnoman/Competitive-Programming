#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int i,n = s.size();
    if(n == 2 && s == "()")
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    int flag = 0;
    for(i = 0;i < n - 1;i++)
    {
        if(s[i] == s[i + 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        for(i = 0;i < n;i++)
        {
            cout << "()";
        }
    }
    else
    {
        for(i = 0;i < n;i++)
        {
            cout << "(";
        }
        for(i = 0;i < n;i++)
        {
            cout << ")";
        }
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