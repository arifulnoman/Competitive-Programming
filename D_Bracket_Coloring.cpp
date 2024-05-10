#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

void solve()
{
    int i,n,balance = 0;
    bool flag = true;
    string s;
    stack<pair<char,int>> stk;
    cin >> n >> s;
    vector<int> ans(n);
    pair<char,int> temp;
    for(i = 0;i < n;i++)
    {
        if(s[i] == '(')
        {
            balance++;
        }
        else
        {
            balance--;
        }
    }
    if(balance != 0)
    {
        cout << -1 << '\n';
        return;
    }
    for(i = 0;i < n;i++)
    {
        if(!stk.empty())
        {
            pair<char,int> temp = stk.top();
            if(temp.first == '(' && s[i] == ')')
            {
                ans[i] = 1;
                ans[temp.second] = 1;
                stk.pop();
                flag = false;
                continue;
            }
            else if(temp.first == ')' && s[i] == '(')
            {
                ans[i] = 2;
                ans[temp.second] = 2;
                stk.pop();
                continue;
            }
            stk.push({s[i],i});
        }
        else
        {
            stk.push({s[i],i});
        }
    }
    if(flag == true)
    {
        ans.assign(n,1);
    }
    cout << *max_element(ans.begin(),ans.end()) << '\n';
    for(i = 0;i < n;i++)
    {
        cout << ans[i] << " ";
    }
    cout << '\n';
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