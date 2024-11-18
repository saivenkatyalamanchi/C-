#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

const int INF = INT_MIN; // Use a very low value for initialization

// Adjacency list to represent the tree with weighted edges
// Each entry in tree[u] is a pair (v, weight) meaning there's an edge from u to v with given weight
vector<vector<pair<int, int>>> tree;

// Matrix to store the maximum edge weight on the path between each pair of nodes
vector<vector<int>> M;

// DFS function to fill the matrix M with maximum edge weights from node x to all other nodes
void dfs(int x, int current, int maxWeight) {
    M[x][current] = maxWeight;
    for (const auto& neighbor : tree[current]) {
        int nextNode = neighbor.first;
        int edgeWeight = neighbor.second;
        
        // If M[x][nextNode] is still at its initial value, it means we haven't visited it from x yet
        if (M[x][nextNode] == INF) {
            dfs(x, nextNode, max(maxWeight, edgeWeight));
        }
    }
}

// Function to preprocess the tree and fill the matrix M
void preprocess(int n) {
    M.assign(n, vector<int>(n, INF)); // Initialize M with INF for all pairs

    for (int x = 0; x < n; ++x) {
        dfs(x, x, INF); // Start DFS from each node x
    }
}

// Function to get the maximum edge weight on the path between two nodes x and y
int maxEdgeInPath(int x, int y) {
    return M[x][y];
}

int main() {
    int n;
    cout << "Enter the number of vertices: ";
    cin >> n;
    
    tree.resize(n);

    cout << "Enter edges in the format (u v weight) for a total of n-1 edges:" << endl;
    for (int i = 0; i < n - 1; ++i) {
        int u, v, weight;
        cin >> u >> v >> weight;
        tree[u].push_back({v, weight});
        tree[v].push_back({u, weight}); // Since the tree is undirected
    }

    // Preprocess to fill the matrix M
    preprocess(n);

    // Example query
    int x, y;
    cout << "Enter two vertices to find the maximum edge weight on the path between them: ";
    cin >> x >> y;
    cout << "Maximum edge weight on path from " << x << " to " << y << " is: " << maxEdgeInPath(x, y) << endl;

    return 0;
}
