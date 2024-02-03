#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int i,n,count;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    if(v[0] == v[n - 1])
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        count = 0,i = n - 1;
        while(i > 0)
        {
            if(v[n - 1] == v[i])
            {
                count++;
            }
            i--;
        }
        cout << n - count << " " << count << endl;
    }
    for(i = 0;i < n - count;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    for(i = 0;i < count;i++)
    {
        cout << v[n - 1] << " ";
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