#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,count = 1;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        v[i] = count;
        count = count + 3;
    }
    for(i = 0;i < n;i++)
    {
        cout << v[i] <<  " ";
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