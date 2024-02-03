#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    if(n == 0)
    {
        cout << "0 0 0" << endl;
        return;
    }
    int f1 = 0,f2 = 1,temp = 0;
    while(f2 <= n)
    {
        temp = f1;
        f1 = f2;
        f2 = temp + f2;
    }
    cout << "0 " << temp << " " << f1 - temp << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}