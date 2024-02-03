#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,maxi_1 = 0,maxi_2 = 0,count = 0,flag = 0;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    maxi_1 = v[0];
    for(i = 1;i < n;i++)
    {
        if(flag == 0)
        {
            if(maxi_1 >= v[i])
            {
                maxi_1 = v[i];
            }
            else
            {
                maxi_2 = v[i];
                flag = 1;
            }
        }
        else
        {
            if(v[i] == maxi_1 || v[i] == maxi_2)
            {
                continue;
            }
            else if(v[i] > maxi_1 && v[i] > maxi_2)
            {
                count++;
                if(maxi_1 < maxi_2)
                {
                    maxi_1 = v[i];
                }
                else
                {
                    maxi_2 = v[i];
                }
            }
            else if(v[i] < maxi_1 && v[i] < maxi_2)
            {
                if(maxi_1 < maxi_2)
                {
                    maxi_1 = v[i];
                }
                else
                {
                    maxi_2 = v[i];
                }
            }
            else
            {
                if(v[i] < maxi_1)
                {
                    maxi_1 = v[i];
                }
                else
                {
                    maxi_2 = v[i];
                }
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