#include<bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

int qpow(int x,int a)
{
    int ans = 1;
    while(a)
    {
        if(a & 1) ans = (ans * x) % MOD;
        x = (x * x) % MOD;
        a >>= 1;
    }
    return ans;
}

vector<int> printDivisors(int n)
{
    vector<int> res;
    int i;
    for(i = 1; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        {
            if(n / i == i) res.push_back(i);
            else
            {
                res.push_back(i);
                res.push_back(n / i);
            }
        }
    }
    return res;
}

vector<int> primeFactors(int n) 
{
    vector<int> x;
    int i;
    while(n % 2 == 0)
    {
        x.push_back(2);
        n = n / 2;
    }
    for(i = 3;i <= sqrt(n);i += 2)
    {
        while(n % i == 0)
        {
            x.push_back(i);
            n = n / i;
        }
    }
    if(n > 2) x.push_back(n);
    return x;
}

bool isValid(int r,int c,int n,int m)
{
    return r >= 0 && r < n && c >= 0 && c < m;
}

bool cmp(pair<int,int>& a,pair<int,int>& b)
{
    int x = a.first - a.second;
    int y = b.first - b.second;
    if(x == y) return a.first > b.first;
    return x < y;
}

void solve()
{
    int i,n;
    cin >> n;
    string s;
    cin >> s;
    stack<int> st;
    st.push(0);
    int ans = 0;
    for(i = 1;i < n;i++)
    {
        if(s[i] == '_')
        {
            if(!st.empty())
            {
                int index = st.top();
                st.pop();
                ans += i - index;
            }
            else
            {
                st.push(i);
            }
        }
        else if(s[i] == '(')
        {
            st.push(i);
        }
        else if(s[i] == ')')
        {
            int index = st.top();
            st.pop();
            ans += i - index;
        }
    }
    cout << ans << '\n';
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