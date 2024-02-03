#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,q;
    cin >> n;
    vector<int> v(n),pre_xor(n);
    cin >> v[0];
    pre_xor[0] = v[0];
    for(i = 1;i < n;i++)
    {
        cin >> v[i];
        pre_xor[i] = pre_xor[i - 1] ^ v[i];
    }
    string s;
    cin >> s;
    int xor_0 = 0,xor_1 = 0;
    for(i = 0;i < n;i++)
    {
        if(s[i] == '0')
        {
            xor_0 = xor_0 ^ v[i];
        }
        else
        {
            xor_1 = xor_1 ^ v[i];
        }
    }
    cin >> q;
    vector<int> ans;
    for(i = 0;i < q;i++)
    {
        int a;
        cin >> a;
        if(a == 2)
        {
            int x;
            cin >> x;
            if(x == 0)
            {
                ans.push_back(xor_0);
            }
            else
            {
                ans.push_back(xor_1);
            }
        }
        else
        {
            int l,r;
            cin >> l >> r;
            r--;
            int temp = 0;
            if(l == 1)
            {
                temp = pre_xor[r];

            }
            else
            {
                l = l - 2;
                temp = pre_xor[r] ^ pre_xor[l];
            }
            xor_0 = xor_0 ^ temp;
            xor_1 = xor_1 ^ temp;
        }
    }
    for(i = 0;i < ans.size();i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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