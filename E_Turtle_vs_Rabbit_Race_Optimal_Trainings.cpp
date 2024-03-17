#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
int binary_search(int start,int end,int target,vector<int>& pre_sum)
{
    int index = start;
    while(start <= end)
    {
        int mid = (start + end) / 2;
        if(pre_sum[mid] <= target)
        {
            index = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    target-=pre_sum[index];
    if(pre_sum[index + 1] - pre_sum[index] <= 2 * target && index < pre_sum.size() - 1)
    {
        index++;
    }
    return index;
}
void solve()
{
    int i,n,q;
    cin >> n;
    vector<int> v(n),pre_sum(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        if(i == 0)
        {
            pre_sum[i] = v[i];
            continue;
        }
        pre_sum[i] = pre_sum[i - 1] + v[i];
    }
    cin >> q;
    for(i = 0;i < q;i++)
    {
        int l,u;
        cin >> l >> u;
        l--;
        int start = l,end = n - 1,target = 0;
        target = (l > 0) ? pre_sum[l - 1] + u : u;
        int index = binary_search(start,end,target,pre_sum);
        cout << index + 1 << " ";
    }
    cout << '\n';
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