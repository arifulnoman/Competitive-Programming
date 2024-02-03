#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
const int rem = 998244353;
using namespace std;
unordered_map<ll, ll> factorial_cache;
ll factorial(ll n)
{
    if (n <= 1)
    {
        return 1;
    }
    if(factorial_cache.find(n) != factorial_cache.end())
    {
        return factorial_cache[n];
    }
    else
    {
        ll result = ((n % rem) * factorial(n - 1)) % rem;
        factorial_cache[n] = result % rem;
        return result;
    }
}
void solve()
{
    int i,temp_size = 1;
    string s;
    cin >> s;
    vector<int> v;
    char temp = s[0];
    for(i = 1;i < s.size();i++)
    {
        if(s[i] == temp)
        {
            temp_size++;
        }
        else
        {
            temp = s[i];
            v.push_back(temp_size);
            temp_size = 1;
        }
    }
    v.push_back(temp_size);
    ll sum = 0,way = 1;
    for(i = 0;i < v.size();i++)
    {
        if(v[i] > 1)
        {
            sum = sum + (v[i] - 1);
            way = ((way % rem) * (v[i] % rem)) % rem;
        }
    }
    ll x = factorial(sum);
    way = ((way % rem) * (x % rem)) % rem;
    way = way % rem;
    cout << sum << " " << way << endl;
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