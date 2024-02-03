#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k,count = 0;
    string s;
    cin >> n >> k >> s;
    for(i = 0;i < n;i++)
    {
        if(s[i] == 'B')
        {
            count++;
        }
    }
    if(count < k)
    {
        for(i = 0;i < n;i++)
        {
            if(s[i] == 'A')
            {
                count++;
            }
            if(count == k)
            {
                cout << 1 << '\n';
                cout << i + 1 << " B" << '\n';
                return;
            }
        }
    }
    if(count > k)
    {
        int temp = count - k;
        for(i = 0;i < n;i++)
        {
            if(s[i] == 'B')
            {
                temp--;
            }
            if(temp == 0)
            {
                cout << 1 << '\n';
                cout << i + 1 << " A" << '\n';
                return;
            }
        }
    }
    cout << 0 << '\n';
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