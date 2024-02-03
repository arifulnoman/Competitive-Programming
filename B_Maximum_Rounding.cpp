#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int i,n = s.size();
    vector<int> v(n,0);
    if(s[0] >= '5')
    {
        cout << 1;
        for(i = 0;i < n;i++)
        {
            cout << 0;
        }
        cout << endl;
        return;
    }
    else
    {
        for(i = n - 1;i >= 0;i--)
        {
            if(s[i] >= '5')
            {
                if(s[i - 1] < '5')
                {
                    int x = s[i - 1] - '0';
                    x++;
                    s[i - 1] = x + '0';
                }
                v[i] = 1;
            }
        }
    }
    if(s[0] >= '5')
    {
        cout << 1;
        for(i = 0;i < n;i++)
        {
            cout << 0;
        }
        cout << endl;
        return;
    }
    else
    {
        int flag = 0;
        for(i = 0;i < n;i++)
        {
            if(flag == 0 && v[i] == 0)
            {
                cout << s[i];
            }
            else
            {
                flag = 1;
                cout << 0;
            }
        }
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
}