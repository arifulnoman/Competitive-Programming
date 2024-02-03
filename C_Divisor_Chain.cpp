#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> v;
    for(i = 1;i <= n;i = i * 2)
    {
        v.push_back(i);
    }
    while(v.back() != n)
    {
        int j = 1;
        int dif = n - v.back();
        while(j * 2 <= dif)
        {
            j = j * 2;
        }
        v.push_back(v.back() + j);
    }
    reverse(v.begin(),v.end());
    cout << v.size() << endl;
    for(i = 0;i < v.size();i++)
    {
        cout << v[i] << " ";
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