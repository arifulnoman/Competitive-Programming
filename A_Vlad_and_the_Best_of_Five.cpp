#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,a = 0,b = 0;
    string s;
    cin >> s;
    for(i = 0;i < s.size();i++)
    {
        if(s[i] == 'A')
        {
            a++;
        }
        else
        {
            b++;
        }
    }
    if(a > b)
    {
        cout << "A\n";
    }
    else
    {
        cout << "B\n";
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