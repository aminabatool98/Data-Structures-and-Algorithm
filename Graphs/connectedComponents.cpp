#include <bits/stdc++.h>
using namespace std;


void dfs(int node, vector<int> adj[],
         vector<bool>& visited) {

    visited[node] = true;

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(neighbor, adj, visited);
        }
    }
}

int countComponents(int V, vector<int> adj[]) {

    vector<bool> visited(V, false);
    int count = 0;

    for (int i = 0; i < V; i++) {

        if (!visited[i]) {
            count++;
            dfs(i, adj, visited);
        }
    }

    return count;
}



int main(){

}