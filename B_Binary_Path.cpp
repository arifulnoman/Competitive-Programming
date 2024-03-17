#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,flag = 0,count = 0,maxi = 1;
    cin >> n;
    string s1,s2,ans;
    cin >> s1 >> s2;
    ans.push_back(s1[0]);
    for(i = 0;i < n;i++)
    {
        char a = '9',b = '9';
        if(flag == 0 && i < n - 1)
        {
            a = s1[i + 1];
        }
        b = s2[i];
        if(flag == 0 && a == b)
        {
            count++;
        }
        if(a > b && flag == 0)
        {
            flag = 1;
            maxi = maxi + count;
        }
        if(a < b)
        {
            count = 0;
            maxi = 1;
        }
        ans.push_back(min(a,b));
    }
    cout << ans << endl;
    cout << maxi << endl;
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