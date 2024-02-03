#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool check_string(string s)
{
    int i;
    char temp = s[0];
    for(i = 1;i < s.size();i++)
    {
        if(s[i] != temp)
        {
            return true;
        }
    }
    return false;
}
void solve()
{
    int i,n;
    string s;
    cin >> n >> s;
    bool res = check_string(s);
    vector<int> ans;
    if(n & 1 || res == false)
    {
        cout << -1 << endl;
        return;
    }
    int count = 300,extra = 0,start = 0,end = n - 1,itr = 0,dual = 0;
    while(start < end && count > 0)
    {
        start = 0,end = s.size() - 1;
        string temp_s;
        if(s[start] != s[end])
        {
            start++;
            end--;
            for(i = start;i <= end;i++)
            {
                temp_s.push_back(s[i]);
            }
            s = temp_s;
            dual++;
        }
        else
        {
            if(s[start] == '0')
            {  
                ans.push_back(n + extra - dual);
                for(i = start + 1;i <= end;i++)
                {
                    temp_s.push_back(s[i]);
                }
                s = temp_s + "0";
            }
            else
            {
                ans.push_back(itr);
                for(i = start;i < end;i++)
                {
                    temp_s.push_back(s[i]);
                }
                s = "1" + temp_s;
            }
            extra++;
        }
        res = check_string(s);
        if(res == false && start < end)
        {
            cout << -1 << endl;
            return;
        }
        itr++;
        count--;
    }
    if(start > end)
    {
        cout << ans.size() << endl;
        for(i = 0;i < ans.size();i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
        return;
    }
    cout << -1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int i,t;
    cin >> t;
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
}