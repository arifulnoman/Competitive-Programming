#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
bool isPrime(int n) {
    if (n <= 1)
    {
        return false;
    }
    if (n <= 3)
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int i,n,count = 0;
    cin >> n;
    map<int,int> m;
    for(i = 0;i < n;i++)
    {
        int temp;
        cin >> temp;
        m[temp]++;
    }
    for(auto it : m)
    {
        if(isPrime(it.first) == true)
        {
            count++;
        }
    }
    if(count & 1)
    {
        cout << "Alice" << endl;
        return;
    }
    cout << "Bob" << endl;
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