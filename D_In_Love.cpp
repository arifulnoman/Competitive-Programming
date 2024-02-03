#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    multiset<int> ms1,ms2;
    for(i = 0;i < n;i++)
    {
        int temp,temp1;
        char ch;
        cin >> ch >> temp >> temp1;
        if(ch == '+')
        {
            ms1.insert(temp);
            ms2.insert(temp1);
        }
        else
        {
            auto l = ms1.find(temp);
            auto r = ms2.find(temp1);
            ms1.erase(l);
            ms2.erase(r);
        }
        if(ms1.empty())
        {  
            cout << "NO" << '\n';
            continue;

        }
        if(*ms1.rbegin() > *ms2.begin())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}