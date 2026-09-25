#include <bits/stdc++.h>
using namespace std;

vector<int> prevSmaller(vector<int> &vec, vector<int> &ans, int n, stack<int> &stk)
{

    for (int i = 0; i < n; i++)
    {
        while (stk.size() > 0 && stk.top() >= vec[i])
        {
            stk.pop();
        }

        if (stk.empty())
        {
            ans[i] = -1;
        }
        else
        {
            ans[i] = vec[stk.top()];
        }

        stk.push(i);
    }
    return ans;
}

int main()
{
    vector<int> vec = {100, 80, 60, 90, 20, 19};
    vector<int> ans(vec.size(), 0);
    stack<int> stk;
    int n = vec.size();

    ans = prevSmaller(vec,ans,n,stk);
    for (int val : ans)
        {
            cout << val;
        }
    return 0;
}