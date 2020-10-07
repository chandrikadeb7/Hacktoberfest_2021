#include<bits/stdc++.h>
using namespace std;
#define pii pair<int,int>

const int INF = (int) 1e9 + 10;
vector<vector<pii>> adj;
// given starting node s
void dijkstra(int s, vector<int> & distance, vector<int> & parent) {
    distance.assign(n, INF);
    parent.assign(n, -1);
    int n = adj.size();
    distance[s] = 0;
    //min heap implementation using STL in c++
    priority_queue<pii, vector<pii>, greater<pii>> q;

    q.push({0, s});
    while (!q.empty()) {
        int v = q.top().second;
        int d_v = q.top().first;
        q.pop();
        if (d_v != distance[v])
            continue;

        for (auto edge : adj[v]) {
            int to = edge.first;
            int len = edge.second;

            if (distance[v] + len < distance[to]) {
                distance[to] = distance[v] + len;
                parent[to] = v;
                q.push({distance[to], to});
            }
        }
    }
}