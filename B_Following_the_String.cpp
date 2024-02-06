#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,j,n;
    cin >> n;
    vector<int> v(n);
    vector<int> letter(26);
    string s;
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    for(i = 0;i < n;i++)
    {
        for(j = 0;j < 26;j++)
        {
            if(letter[j] == v[i])
            {
                s.push_back('a' + j);
                letter[j]++;
                break;
            }
        }
    }
    cout << s << '\n';
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