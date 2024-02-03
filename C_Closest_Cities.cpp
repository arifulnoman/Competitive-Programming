#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,m;
    cin >> n;
    vector<int> v(n),distance(n),left_to_right(n),right_to_left(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    distance[0] = 1;
    distance[n - 1] = -1;
    for(i = 1;i < n - 1;i++)
    {
        if(abs(v[i] - v[i - 1]) < abs(v[i] - v[i + 1]))
        {
            distance[i] = -1;
        }
        else
        {
            distance[i] = 1;
        }
    }
    for(i = 1;i < n;i++)
    {
        if(distance[i - 1] == 1)
        {
            left_to_right[i] = left_to_right[i - 1] + 1;
        }
        else
        {
            left_to_right[i] = left_to_right[i - 1] + abs(v[i] - v[i - 1]);
        }
    }
    for(i = n - 2;i >= 0;i--)
    {
        if(distance[i + 1] == -1)
        {
            right_to_left[i] = right_to_left[i + 1] + 1;
        }
        else
        {
            right_to_left[i] = right_to_left[i + 1] + abs(v[i] - v[i + 1]);
        }
    }
    cin >> m;
    for(i = 0;i < m;i++)
    {
        int temp1,temp2;
        cin >> temp1 >> temp2;
        if(temp1 < temp2)
        {
            cout << left_to_right[temp2 - 1] - left_to_right[temp1 - 1] << '\n';
        }
        else
        {
            cout << right_to_left[temp2 - 1] - right_to_left[temp1 - 1] << '\n';
        }
    }
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