#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    string s,temp;
    cin >> s;
    int i,n = s.size(),flag = 0;
    temp = s[0];
    for(i = 1;i < n;i++)
    {
        if(s[i] == '0')
        {
            temp.push_back(s[i]);
            flag = i;
            continue;
        }
        break;
    }
    string temp_s;
    for(i = flag + 1;i < n;i++)
    {
        temp_s.push_back(s[i]);
    }
    if(temp.empty() || temp_s.empty())
    {
        cout << -1 << '\n';
        return;
    }
    int a = stoi(temp),b = stoi(temp_s);
    if(a >= b)
    {
        cout << -1;
    }
    else
    {
        cout << a << " " << b;
    }
    cout << '\n';
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