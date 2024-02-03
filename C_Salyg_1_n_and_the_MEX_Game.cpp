#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n;
    cin >> n;
    vector<int> v(n);
    for(i = 0;i < n;i++)
    {
        cin >> v[i];
    }
    int mex = 0;
    for(i = 0;i < n;i++)
    {
        if(mex == v[i])
        {
            mex++;
        }
        else
        {
            break;
        }
    }
    int turn = 0,flag = 0,bob_move = INF;
    while(true)
    {
        if(turn > (2 * n) + 1 || bob_move == -1)
        {
            break;
        }
        if(flag == 0)
        {
            if(bob_move < mex)
            {
                cout << bob_move << endl;
            }
            else
            {
                cout << mex << endl;
            }
        }
        else
        {
            cin >> bob_move;
        }
        flag = flag ^ 1;
        turn++;
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