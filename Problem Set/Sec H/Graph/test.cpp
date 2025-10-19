#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

class Graph {
    int vertices;
    list<int> *ll;
    vector<bool> visited;
    vector<int> parent;

public:
    Graph(int ver) {
        vertices = ver;
        ll = new list<int> [ver];
        visited.assign(ver, false);
        parent.assign(ver, -1);
    }

    void initVisited() {
        visited.assign(vertices, false);
        parent.assign(vertices, -1);
    }

    void addEdge(int u, int v) {
        ll[u].push_back(v);
        ll[v].push_back(u);
    }

    void bfs(int x, int f) {
        initVisited();
        queue<int> q;

        q.push(x);
        visited[x] = true;
        // parent[x] = -1;

        while(q.size() > 0) {
            int u = q.front();
            q.pop();

            for(int v : ll[u]) {
                if(!visited[v]) {
                    visited[v] = true;
                    parent[v] = u;
                    q.push(v);
                }
            }
        }

        vector<int> ans;
        int curr = f;
        ans.push_back(f);

        while(curr != x) {
            curr = parent[curr];
            ans.push_back(curr);
        }

        reverse(ans.begin(), ans.end());
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << "";
            
            if(i < ans.size()-1) cout << "->";
        }

        cout << endl;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/Sublime file/input.txt", "r", stdin);
    freopen("D:/Sublime file/output.txt", "w", stdout);

    int v, e; cin >> v >> e;
    Graph g(v+1);
    
    while(e--) {
        int u, v; cin >> u >> v;
        g.addEdge(u, v);
    }

    int x, f; cin >> x >> f;
    g.bfs(x, f);

    return 0;
}