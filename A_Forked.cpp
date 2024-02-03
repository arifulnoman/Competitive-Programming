#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int a,b,x1,y1,x2,y2,count = 0;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;
    map<pair<int,int>,int> m;
    m[{x1 + a,y1 + b}]++;
    m[{x1 + a,y1 - b}]++;
    m[{x1 - a,y1 + b}]++;
    m[{x1 - a,y1 - b}]++;
    swap(a,b);
    m[{x1 + a,y1 + b}]++;
    m[{x1 + a,y1 - b}]++;
    m[{x1 - a,y1 + b}]++;
    m[{x1 - a,y1 - b}]++;
    swap(a,b);
    if(m[{x2 + a,y2 + b}] > 0)
    {
        count++;
    }
    if(m[{x2 + a,y2 - b}] > 0)
    {
        count++;
    }
    if(m[{x2 - a,y2 + b}] > 0)
    {
        count++;
    }
    if(m[{x2 - a,y2 - b}] > 0)
    {
        count++;
    }
    swap(a,b);
    if(m[{x2 + a,y2 + b}] > 0)
    {
        count++;
    }
    if(m[{x2 + a,y2 - b}] > 0)
    {
        count++;
    }
    if(m[{x2 - a,y2 + b}] > 0)
    {
        count++;
    }
    if(m[{x2 - a,y2 - b}] > 0)
    {
        count++;
    }
    if(a == b)
    {
        cout << count / 2 << '\n';
        return;
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