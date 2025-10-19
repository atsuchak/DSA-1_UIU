#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class Graph {
    int vertices;
    list<int> *ll;
    vector<bool> visited;

public:
    Graph(int ver) {
        vertices = ver;
        ll = new list<int> [ver];
        visited.assign(ver, false);
    }

    void initVisited() {
        visited.assign(vertices, false);
    }

    bool isVisited(int x) {
        return visited[x];
    }

    void addEdge(int u, int v) {
        ll[u].push_back(v);
        ll[v].push_back(u);
    }

    
    int i = 0;
    void dfs(int x) {
        stack<int> s;
        s.push(x);
        visited[x] = true;

        i++;
        cout << "Component " << i << ": ";
        while(s.size() > 0) {
            int u = s.top();
            s.pop();

            cout << u << " ";
 
            for(int v : ll[u]) {
                if(!visited[v]) {
                    s.push(v);
                    visited[v] = true;
                }
            }
        }
    }

    void dfs_recur(int u) {
        visited[u] = true;

        cout << u << " ";
        for(int v: ll[u]) {
            if(!visited[v]) {
                visited[v] = true;
                dfs_recur(v);
            }
        }
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int n, e; 
    cin >> n >> e;

    Graph g(n + 1); 

    while(e--) {
        int u, v; cin >> u >> v;
        g.addEdge(u, v);
    }

    int cnt = 0;
    for(int i = 1; i <= n; i++) {
        if(g.isVisited(i)) continue;
        g.dfs(i);
        cnt++;
        cout << endl;
    }
    cout << "Number of components: " << cnt << endl;

    return 0;
}