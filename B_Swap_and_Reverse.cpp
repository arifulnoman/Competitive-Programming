#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k;
    string s;
    cin >> n >> k >> s;
    if(k < n && (k & 1) == 0)
    {
        sort(s.begin(),s.end());
        cout << s << endl;
        return;
    }
    string s1,s2;
    for(i = 0;i < n;i++)
    {
        if((i & 1) == 0)
        {
            s1.push_back(s[i]);
        }
        else
        {
            s2.push_back(s[i]);
        }
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int count = 0;
    for(i = 0;i < n;i = i + 2)
    {
        s[i] = s1[count++];
    }
    count = 0;
    for(i = 1;i < n;i = i + 2)
    {
        s[i] = s2[count++];
    }
    cout << s << endl;
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