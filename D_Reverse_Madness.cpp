#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n,k,q;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> l(k),r(k);
    for(i = 0;i < k;i++)
    {
        cin >> l[i];
        l[i]--;
    }
    for(i = 0;i < k;i++)
    {
        cin >> r[i];
        r[i]--;
    }
    cin >> q;
    int mark[n + 1] = {0};
    while (q > 0)
    {
        int x;
        cin >> x;
        mark[x - 1]++;
        q--;
    }
    string ans = "";
    for(i = 0;i < k;i++)
    {
        string s1 = s.substr(l[i],r[i] - l[i] + 1);
        int a = l[i];
        int b = r[i];
        int sum = 0;
        for(j = a;j <= (a + b) / 2;j++)
        {
            sum = sum + mark[j] + mark[b - j + a];
            if(sum & 1)
            {
                swap(s1[j - a],s1[b - j]);
            }
        }
        ans = ans + s1;
    }
    cout << ans << endl;
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