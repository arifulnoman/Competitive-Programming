#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,flag = 0,count = 0,maxi = 0;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int mini = *min_element(v.begin(),v.end());
    for(i = 0;i < n;i++)
    {
        if(flag == 0)
        {
            if(v[i] > mini)
            {
                count++;
            }
            else
            {
                flag = 1;
                maxi = v[i];
            }
        }
        else
        {
            if(v[i] >= maxi)
            {
                maxi = v[i];
            }
            else
            {
                cout << -1 << '\n';
                return;
            }
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