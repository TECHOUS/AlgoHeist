#include<bits/stdc++.h>
using namespace std;

constexpr int INF = 1e9;

int n, m;      // n - number of vertices, m - number of edges
vector<int> dist;
vector<tuple<int,int,int>> edges;

void bellman_ford(int start) {
    dist[start] = 0;
    for (int i = 0; i < n; i++) {
        for (auto e : edges) {
            int a, b, w;
            tie(a, b, w) = e;
            if (dist[a] + w < dist[b])
                dist[b] = dist[a] + w;
        }
    }
}

int main() {
    cin >> n >> m;
    dist.resize(n, INF), edges.resize(m);
    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        edges[i] = {a, b, w};
    }
    int start;
    cout << "Choose the starting vertex: ";
    cin >> start;
    bellman_ford(start);
    cout << "\nDistances:\n";
    for (auto d : dist) cout << d << '\n';
    return 0;
}