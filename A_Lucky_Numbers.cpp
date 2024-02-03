#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int l,r;
        cin >> l >> r;
        int luckiness = 0;
        int result;
        if(r - l >= 100)
        {
            int temp = r / 100;
            temp = temp * 100 + 90;
            if(temp <= r)
            {
                cout << temp << endl;
                return;
            }
            cout << temp - 100 << endl;
            return;
        }
        for(int j = l;j <= r;j++)
        {
            int number = j;
            int max = 0,min = 9;
            while(number != 0)
            {
                int digit = number % 10;
                if(digit < min)
                {
                    min = digit;
                }
                if(digit > max)
                {
                    max = digit;
                }
                number = number/10;
            }
            if((max - min) >= luckiness)
            {
                luckiness = max - min;
                result = j;
            }
        }
        cout << result << endl;
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