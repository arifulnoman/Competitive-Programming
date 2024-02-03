#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,count_1 = 0,count_2 = 0;
    cin >> n;
    ll sum = 0;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        sum = sum + temp;
        if(temp == 1)
        {
            count_2++;
        }
        else
        {
            count_1++;
        }
    }
    if(count_1 + (count_2 * 2) > sum || n == 1)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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