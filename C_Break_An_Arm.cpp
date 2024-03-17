#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve(int t)
{
    double ab, ac, bc, ratio;
    cin >> ab >> ac >> bc >> ratio;
    double New_ratio = ratio / (ratio + 1);
    cout << "Case " << t << ": " << setprecision(10) << ab * sqrt(New_ratio) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i,t;
    cin >> t;
    for(i = 1;i <= t;i++)
    {
        solve(i);
    }
    return 0;
}