#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i;
    string s;
    cin >> s;
    string temp;
    temp+=s[0];
    temp+=s[1];
    int hour = stoi(temp);
    if(hour < 12)
    {
        if(hour < 1)
        {
            hour+=12;
            cout << to_string(hour) << s.substr(2,3) << " AM\n";
            return;
        }
        cout << s << " AM\n";
        return;
    }
    else if(hour > 12)
    {
        hour-=12;
        if(hour < 10)
        {
            string ch = to_string(hour);
            ch = "0" + ch + s.substr(2,3);
            cout << ch << " PM\n";
        }
        else
        {
            string ch = to_string(hour);
            ch = ch + s.substr(2,3);
            cout << ch << " PM\n";
        }
        return;
    }
    cout << s << " PM\n"; 
}

signed main()
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