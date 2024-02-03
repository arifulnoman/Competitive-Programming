#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k;
    cin >> n >> k;
    vector<int> v(n);
    set<int> s;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
        s.insert(v[i]);
    }
    int start = 0,end = n - 1;
    for(i = 1;i <= k;i++)
    {
        int temp = i;
        int c = s.count(temp);
        if(c > 0)
        {
            while(start <= end && v[start] < temp)
            {
                start++;
            }
            while(start <= end && v[end] < temp)
            {
                end--;
            }
            cout << 2 * (end - start + 1) << " ";
        }
        else
        {
            cout << 0 << " ";
        }
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