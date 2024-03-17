#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,m;
    cin >> n >> m;
    vector<int> v(n);
    for(i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    double maxi = 0,a = 0,w2 = 0;
    int wx,wy;
    for(i = 0;i < m;i++)
    {
        cin >> wx >> wy >> w2;
        a = (v[wx - 1] + v[wy - 1] ) / w2;
        if(a > maxi)
        {
            maxi = a;
        }
        
    }
    cout << setprecision(12) << maxi << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}