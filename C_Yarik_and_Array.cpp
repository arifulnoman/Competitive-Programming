#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int maxi = v[0],sum = v[0],flag = 0;
    if(v[0] & 1)
    {
        flag = 1;
    }
    for(i = 1;i < n;i++)
    {   
        int temp_flag = 0;
        if(v[i] & 1)
        {
            temp_flag = 1;
        }
        if(flag == temp_flag)
        {
            maxi = max(maxi,v[i]);
            sum = v[i];
            continue;
        }
        if(sum + v[i] < 0)
        {
            maxi = max(maxi,v[i]);
            sum = v[i];
        }
        else
        {
            sum = sum + v[i];
            if(v[i] > sum)
            {
                sum = v[i];
            }
            maxi = max(maxi,sum);
        }
        flag = temp_flag;
    }
    cout << maxi << '\n';
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