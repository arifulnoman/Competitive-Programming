#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    string s;
    cin >> n >> s;
    unordered_map<char,int> letter;
    for(i = 0;i < n;i++)
    {
        if(letter[s[i]] == 0)
        {
            letter[s[i]] = i + 1;
            continue;
        }
        if(letter[s[i]] != i)
        {
            cout << "NO\n";
            return;
        }
        letter[s[i]] = i + 1;
    }
    cout << "YES\n";

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