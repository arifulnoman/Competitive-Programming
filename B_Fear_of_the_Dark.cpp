#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
double euclidean_distance(double x1,double x2,double y1,double y2)
{
    return sqrt(pow((x1 - y1),2) + pow((x2 - y2),2));
}
void solve()
{
    double p1,p2,a1,a2,b1,b2,o1 = 0,o2 = 0;
    cin >> p1 >> p2 >> a1 >> a2 >> b1 >> b2;
    double AO = euclidean_distance(a1,a2,o1,o2);
    double AP = euclidean_distance(a1,a2,p1,p2);
    double A = max(AO,AP);
    double BO = euclidean_distance(b1,b2,o1,o2);
    double BP = euclidean_distance(b1,b2,p1,p2);
    double B = max(BO,BP);
    double distance = min(A,B);
    double AB = euclidean_distance(a1,a2,b1,b2) / 2;
    double dis = max({min(AO,BO),min(AP,BP),AB});
    cout << setprecision(11) << min(dis,distance) << endl;
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