#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,k,count = 0,flag = 0;
    cin >> n >> k;
    vector<int> v(n);
    int first = 0;
    while(count < n)
    {
        if(v[first] != 0)
        {
            break;
        }
        if(flag == 0)
        {
            for(i = first;i < n;i = i + k)
            {
                if(v[i] == 0)
                {
                    v[i] = ++count;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            int temp = 0;
            for(i = first;i < n;i = i + k)
            {
                if(v[i] == 0)
                {
                    temp++;
                }
                else
                {
                    break;
                }
            }
            for(i = first;i < n;i = i + k)
            {
                if(v[i] == 0)
                {
                    v[i] = count + temp;
                    temp--;
                }
                else
                {
                    break;
                }
            }
            count = v[first];
        }
        if(flag == 0)
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
        first++;
    }
    for(i = 0;i < n;i++)
    {
        cout << v[i] << " ";
    }
    cout << '\n';
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