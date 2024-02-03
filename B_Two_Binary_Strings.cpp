#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    string s1,s2;
    cin >> s1 >> s2;
    int i;
    for(i = 1;i < s1.size();i++)
    {
        if(s1[i - 1] == '0' && s2[i - 1] == '0' && s1[i] == '1' && s2[i] == '1')
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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