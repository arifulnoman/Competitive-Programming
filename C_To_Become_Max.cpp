#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool is_possible(int target,vector<int> v,int n,int k)
{
    int i,j;
    for(i = 0;i < n - 1;i++)
    {
        if(v[i] >= target)
        {
            return true;
        }
        else
        {
            int x = target,flag = 0,temp_k = k;
            for(j = i;j < n - 1;j++)
            {
                if(v[j] >= x)
                {
                    return true;
                }
                int dif = x - v[j];
                temp_k = temp_k - dif;
                if(temp_k < 0)
                {
                    flag = 1;
                    break;
                }
                x--;
            }
            if(x <= v[n - 1] && flag == 0)
            {
                return true;
            }
        }
    }
    return false;
}
void solve()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int low = 0,high = INF,ans = 0;
    while(low <= high)
    {
        int mid = low + (high - low) / 2;
        if(is_possible(mid,v,n,k))
        {
            ans = mid;
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    int maxi = *max_element(v.begin(),v.end());
    ans = max(maxi,ans);
    cout << ans << endl;
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
