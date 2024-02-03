#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,flag = 0;
    string s1,s2,s3;
    cin >> n >> s1 >> s2 >> s3;
    for(i = 0;i < n;i++)
    {
        if(s3[i] != s1[i] && s3[i] != s2[i])
        {
            flag = 1;
        }
    }
    if(flag == 1)
    {
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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