#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int i,sum = 0,token_minus = -1,f_last_0 = INF,last_1 = 0,flag = 0;
    for(i = 0;i < s.size();i++)
    {
        if(s[i] == '+')
        {
            flag = 0;
            sum++;
            if(token_minus > 0)
            {
                token_minus++;
            }
        }
        if(s[i] == '-')
        {
            flag = 0;
            sum--;
            if(sum < last_1)
            {
                last_1 = sum;
            }
            if(token_minus > 0)
            {
                token_minus--;
            }
            if(sum < f_last_0)
            {
                f_last_0 = INF;
            }
        }
        if(s[i] == '1')
        {
            if(token_minus > 0 || flag == -1 || f_last_0 <= sum)
            {
                cout << "NO" << endl;
                return;
            }
            last_1 = sum;
            flag = 1;
        }
        if(s[i] == '0')
        {
            f_last_0 = min(f_last_0,sum);
            if(sum == 0 || sum == 1 || flag == 1 || last_1 == sum)
            {
                cout << "NO" << endl;
                return;
            }
            flag = -1;
            token_minus = 1;
        }
    }
    cout << "YES" << '\n';
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