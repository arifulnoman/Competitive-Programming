#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int i = 00,cursor = 1,sum = 0;
    while(i < 4)
    {
        int temp = s[i] - '0';
        if(temp == 0)
        {
            temp = 10;
        }
        if(temp == cursor)
        {
            sum++;
        }
        else
        {
            sum = sum + abs(temp - cursor) + 1;
            cursor = temp;
        }
        i++;
    }
    cout << sum << endl;
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