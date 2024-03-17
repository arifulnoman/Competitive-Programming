#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,first = 0,last = 0,flag = 0,count = 0;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        if(v[i] == 1 && flag == 0)
        {
            flag = 1;
            first = i;
        }
        if(v[i] == 1)
        {
            last = i;
        }
    }
    for(i = first;i <= last;i++)
    {
        if(v[i] == 0)
        {
            count++;
        }
    }
    cout << count << '\n';
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