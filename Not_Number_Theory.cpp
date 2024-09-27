#include <bits/stdc++.h>
#define int long long
#define dbg(a) cout << #a << " = " << a << '\n'
using namespace std;

const int INF = 1e18;
const int MOD = 1e9 + 7;

// Function to count the number of set bits in a number
int countSetBits(int n)
{
    return __builtin_popcountll(n); // Efficient way to count set bits for long long
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();

    int maxSetBits = -1;
    int bestNumber = -1;

    // We will check for each possible replacement for '?'
    for (int d0 = 0; d0 <= 9; d0++)
    {
        for (int d1 = 0; d1 <= 9; d1++)
        {
            string candidate = s;

            // Replace '?' with digits, we replace each '?' independently
            for (int i = 0; i < n; i++)
            {
                if (candidate[i] == '?')
                {
                    // Replace '?' with appropriate digit
                    candidate[i] = (i == 0) ? (char)('0' + d0) : (char)('0' + d1);
                }
            }

            // Convert the candidate to a number
            int number = stoll(candidate);

            // Count set bits in the binary representation of the number
            int setBits = countSetBits(number);

            // Update if this has more set bits or is larger with the same number of set bits
            if (setBits > maxSetBits || (setBits == maxSetBits && number > bestNumber))
            {
                maxSetBits = setBits;
                bestNumber = number;
            }
        }
    }

    // Output the best result (without leading zeros)
    cout << bestNumber << '\n';
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}