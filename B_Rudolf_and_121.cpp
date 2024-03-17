#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n - 2;i++)
    {
        if(v[i] > 0)
        {
            int temp = v[i];
            for(j = i;j < i + 3;j++)
            {
                if(j == i + 1)
                {
                    v[j]-=temp;
                }
                v[j]-=temp;
                if(v[j] < 0)
                {
                    cout << "NO\n";
                    return;
                }
            }
        }
    }
    if(v[n -2] != 0 || v[n - 1] != 0)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
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