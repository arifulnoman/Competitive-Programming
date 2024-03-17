#include<bits/stdc++.h>
#define ll long long
const int INF = 1e9 + 7;
using namespace std;
void solve()
{
    int i,n,m,k;
    cin >> n >> m >> k;
    stack<int> stk;
    set<int> st;
    stk.push(k);
    for(i = 0;i < m;i++)
    {
        int d;
        char ch;
        cin >> d >> ch;
        stack<int> temp_stk;
        st.clear();
        while(!stk.empty())
        {
            int st_size = st.size();
            int temp = stk.top();
            stk.pop();
            if(ch == '0' || ch == '1')
            {
                int element;
                if(ch == '0')
                {
                    element = temp + d;
                }
                else
                {
                    element = temp - d;
                    if(element < 0)
                    {
                        element = n + element;
                    }
                }
                element%=n;
                if(element == 0)
                {
                    element = n;
                }
                st.insert(element);
                if(st.size() > st_size)
                {
                    temp_stk.push(element);
                }
            }
            else
            {
                int element_1,element_2;
                element_1 = temp + d;
                element_1%=n;
                if(element_1 == 0)
                {
                    element_1 = n;
                }
                element_2 = temp - d;
                if(element_2 < 0)
                {
                    element_2 = n + element_2;
                }
                element_2%=n;
                if(element_2 == 0)
                {
                    element_2 = n;
                }
                st.insert(element_1);
                if(st.size() > st_size)
                {
                    temp_stk.push(element_1);
                }
                st_size = st.size();
                st.insert(element_2);
                if(st.size() > st_size)
                {
                    temp_stk.push(element_2);
                }
            }
        }
        stk.swap(temp_stk);
    }
    cout << st.size() << '\n';
    for(auto it : st)
    {
        cout << it << " ";
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