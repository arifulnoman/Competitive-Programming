#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
int n = 1e7;
vector<bool> prime(n + 1,true);
void sieve() {

    prime[0] = prime[1] = false;
    for (int p = 2; p * p <= n; p++) {
        if (prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }
}
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
void solve()
{
    int i,j,l,r;
    cin >> l >> r;
    if(l == r)
    {
        if(prime[l] == true)
        {
            cout << -1 << endl;
            return;
        }
        else
        {
            for(i = 2;i < l / 2;i++)
            {
                int x = l - i;
                int res = gcd(i,x);
                if(res != 1)
                {
                    cout << i << " " << x << endl;
                    return;
                }
            }
        }
    }
    for(i = l;i <= r;i++)
    {
        if((i & 1) == 0 && i != 2)
        {
            cout << i / 2 << " " << i / 2 << endl;
            return;
        }
    }
    cout << -1 << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    sieve();
    while(t > 0)
    {
        solve();
        t--;
    }
    return 0;
}