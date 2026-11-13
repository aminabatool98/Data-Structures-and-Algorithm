
#include <bits/stdc++.h>
using namespace std;

vector<int> breathfirstsearch(int n, vector<int> adj[]) {

    vector<int> vis(n, 0);

    vis[0] = 1;

    queue<int> q;
    q.push(0);

    vector<int> bfs;

    while (!q.empty()) {

        int first = q.front();
        q.pop();

        bfs.push_back(first);

        for (auto it : adj[first]) {

            if (!vis[it]) {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}

int main() {

    vector<int> arr[5] = {
        {1, 2},
        {0, 3},
        {0, 4},
        {1},
        {2}
    };

    vector<int> result = breathfirstsearch(5, arr);

    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}
