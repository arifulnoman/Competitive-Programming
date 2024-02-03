#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    double i,n;
    double d,h;
    cin >> n >> d >> h;
    vector<double> v(n);
    vector<double> height;
    cin >> v[0];
    for(i = 1;i < n;i++)
    {
        cin >> v[i];
        height.push_back(v[i] - v[i - 1]);
    }
    height.push_back(h);
    double area = 0;
    double a = d * h * 0.5;
    for(i = 0;i < height.size();i++)
    {
        if(height[i] < h)
        {
            double temp_d = (d * (h - height[i])) / h;
            temp_d = temp_d * 0.5 * (h - height[i]);
            area = area + (a - temp_d);
        }
        else
        {
            area+=a;
        }
    }
    cout << setprecision(8) << area << endl;
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