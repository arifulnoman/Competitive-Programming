#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int a1,a2,b1,b2,c1,c2,d1,d2;
    cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2 >> d1 >> d2;
    int ab = sqrt(((a1 - b1) * (a1 - b1)) + ((a2 - b2) * (a2 - b2)));
    int ac = sqrt(((a1 - c1) * (a1 - c1)) + ((a2 - c2) * (a2 - c2)));
    if(ab <= ac)
    {
        cout << ab * ab << '\n';
        return;
    }
    cout << ac * ac << '\n';
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