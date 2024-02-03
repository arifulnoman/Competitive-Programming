#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,flag = 0;
    cin >> n;
    vector<int> v(n);
    vector<int> mark(n,0);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    ll sum = 0,temp_sum = 0;
    for(i = 0;i < n;i++)
    {
        if(flag == 0)
        {
            if(i % 2 == 0)
            {
                if(v[i] > 0)
                {
                    sum = sum + v[i];
                    mark[i] = 1;
                    flag = 1;
                }
            }
        }
        else
        {
            if(v[i] > 0)
            {
                sum = sum + v[i];
                mark[i] = 1;
            }
        }
    }
    vector<int> last;
    for(i = 0;i < n;i++)
    {
        if(mark[i] == 0)
        {
            last.push_back(v[i]);
            if(v[i] > 0)
            {
                temp_sum = temp_sum + v[i];
            }
        }
    }
    ll maxi = 0;
    for(i = 0;i < last.size();i++)
    {
        if(i % 2 == 0)
        {
            if(temp_sum + last[i] > maxi)
            {
                maxi = temp_sum + last[i];
            }
        }
        else
        {
            if(v[i] > 0)
            {
                temp_sum = temp_sum - v[i];
                if(maxi < temp_sum)
                {
                    maxi = temp_sum;
                }
            }
            else
            {
                if(maxi < temp_sum)
                {
                    maxi = temp_sum;
                }
            }
        }
    }
    cout << sum + maxi << endl;
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
