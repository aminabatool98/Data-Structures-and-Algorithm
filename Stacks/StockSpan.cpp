#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> vec = {100, 80, 60, 90, 20, 19};
    vector<int> ans(vec.size(), 0);
    stack<int> stk;
    int n = vec.size();

    for (int i = 0; i < n; i++)
    {
        while (stk.size() > 0 && vec[stk.top()] <= vec[i])
        {
            stk.pop();
        }

        if (stk.empty())
        {
            ans[i] = i + 1;
        }
        else
        {
            ans[i] = i - stk.top();
        }

        stk.push(i);
    }
    for (int val : ans)
        {
            cout << val;
        }
    return 0;
}