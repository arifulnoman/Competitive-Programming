#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    map<int,int> m;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        m[temp]++;
    }
    if(m.size() == 1)
    {
        cout << "Yes" << endl;
        return;
    }
    int flag = 0,temp = 0;
    if(m.size() == 2)
    {
        for(auto it : m)
        {
            if(flag == 0)
            {
                temp+=it.second;
                flag = 1;
            }
            else
            {
                temp = abs(temp - it.second);
            }
        }
        if(temp > 1)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
        return;
    }
    cout << "No" << endl;
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