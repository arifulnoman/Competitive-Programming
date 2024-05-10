#include<bits/stdc++.h>
using namespace std;

int main()
{
    while(true)
    {
        int i,j,n,count = 1;
        cin >> n;
        if(n == 0)
        {
            return 0;
        }
        vector<vector<int>> v(n,vector<int> (n));
        int up_border = 0,right_border = n - 1,down_border = n - 1,left_border = 0;
        while(left_border <= right_border)
        {
            for(i = left_border;i <= right_border;i++)
            {
                v[up_border][i] = count;
            }
            up_border++;
            for(i = up_border;i <= down_border;i++)
            {
                v[i][right_border] = count;
            }
            right_border--;
            for(i = left_border;i <= right_border;i++)
            {
                v[down_border][i] = count;
            }
            down_border--;
            for(i = up_border;i <= down_border;i++)
            {
                v[i][left_border] = count;
            }
            left_border++;
            count++;
        }
        for(i = 0;i < n;i++)
        {
            for(j = 0;j < n;j++)
            {
                if(j == 0)
                { 
                    cout << setw(3) << v[i][j];
                }
                else
                {
                    cout << setw(4) << v[i][j];
                }
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}