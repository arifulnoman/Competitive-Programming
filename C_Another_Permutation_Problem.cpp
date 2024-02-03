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
        v[i] = i + 1;
    }
    ll maxi = -1;
    for(i = 0;i < n;i++)
    {
        vector<int> temp = v;
        reverse(temp.begin() + i,temp.end());
        ll sum = 0;
        int temp_maxi = -1;
        for(j = 0;j < n;j++)
        {
            if(temp_maxi < temp[j] * (j + 1))
            {
                temp_maxi = temp[j] * (j + 1);
            }
            sum = sum + (temp[j] * (j + 1));
        }
        sum = sum - temp_maxi;
        maxi = max(sum,maxi);
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