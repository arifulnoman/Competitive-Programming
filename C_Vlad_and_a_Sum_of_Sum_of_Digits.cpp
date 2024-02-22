#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
vector<int> v(200005);
int sod(int n)
{
    int sum = 0;
    while(n != 0)
    {
        sum+=(n % 10);
        n/=10;
    }
    return sum;
}
void solve()
{
    int i,n;
    cin >> n;
    cout << v[n] << '\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    v[0] = 0;
    int i,t;
    cin >> t;
    for(i = 1;i < 200005;i++)
    {
        v[i] = v[i - 1] + sod(i);
    }
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
}