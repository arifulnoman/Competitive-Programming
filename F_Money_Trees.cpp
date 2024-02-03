#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> v(n);
    vector<int> h(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        cin >> h[i];
    }
    int start = -1,end = -1,maxi = 0,sum = 0;
    i = 0;
    while(i < n)
    {
        if(start == -1 && end == -1)
        {
            if(v[i] <= k)
            {
                start = i;
                end = i;
                sum = v[i];
                maxi = max(maxi,end - start + 1);
            }
        }
        else
        {
            if(h[i - 1] % h[i] == 0 && sum + v[i] <= k)
            {
                sum = sum + v[i];
                end++;
                maxi = max(maxi,end - start + 1);
            }
            else if(h[i - 1] % h[i] == 0 && sum + v[i] > k && v[i] <= k)
            {
                sum = sum - v[start];
                start++;
                if(start > end)
                {
                    start = -1;
                    end = -1;
                }
                continue;
            }
            else
            {
                start = i;
                end = i;
                sum = v[i];
                maxi = max(maxi,end - start + 1);
            }
        }
        i++;
    }
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