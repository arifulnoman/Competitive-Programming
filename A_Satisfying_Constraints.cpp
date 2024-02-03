#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,start = 0,end = INF;
    cin >> n;
    vector<int> v;
    for(i = 0;i < n;i++)
    {
        int temp1,temp2;
        cin >> temp1 >> temp2;
        if(temp1 == 1)
        {
            if(start < temp2)
            {
                start = temp2;
            }
        }
        else if(temp1 == 2)
        {
            if(end > temp2)
            {
                end = temp2;
            }
        }
        else
        {
            v.push_back(temp2);
        }
    }
    int erase = 0;
    for(i = 0;i < v.size();i++)
    {
        if(v[i] >= start && v[i] <= end)
        {
            erase++;
        }
    }
    if(end < start)
    {
        cout << 0 << '\n';
        return;
    }
    cout << end - start + 1 - erase << '\n';
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