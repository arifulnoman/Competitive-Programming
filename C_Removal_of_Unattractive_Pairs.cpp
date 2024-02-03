#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int n,i;
    string s;
    cin >> n >> s;
    int letters[26] = {0};
    for(i = 0;i < n;i++)
    {
        letters[s[i] - 'a']++;
    }
    sort(letters,letters + 26);
    for(i = 0;i < 25;i++)
    {
        letters[25]-=letters[i];
    }
    if(letters[25] <= 0)
    {
        if(n & 1)
        {
            cout << 1 << '\n';
            return;
        }
        cout << 0 << '\n';
        return;
    }
    cout << letters[25] << '\n';
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