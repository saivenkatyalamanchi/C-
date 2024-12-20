#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> // For memset
using namespace std;

// Define a pair to store edges (neighbor, weight)
typedef pair<int, int> Edge;

// Function to perform DFS and populate the matrix
void dfs(int current, int parent, int start, int maxEdge, 
         vector<vector<Edge>> &tree, vector<vector<int>> &M) {
    for(auto &[neighbor, weight] : tree[current]){
        if(neighbor != parent){
            M[start][neighbor] = max(maxEdge,weight);
            dfs(neighbor,current,start,M[start][neighbor],tree,M);
        }
    }
}

// Preprocessing function
vector<vector<int>> preprocessTree(vector<vector<Edge>> &tree, int n) {
    // Initialize the matrix with -1
    vector<vector<int>> M(n, vector<int>(n, -1));
    
    // Diagonal is 0 since there's no edge between a vertex and itself
    for (int i = 0; i < n; ++i) {
        M[i][i] = 0;
    }

    // Run DFS from every vertex to fill the matrix
    for(int i=0;i<n;i++){
        dfs(i,-1,i,0,tree,M);
    }

    return M;
}

// Function to query the matrix
int maxEdgeOnPath(vector<vector<int>> &M, int x, int y) {
    return M[x][y];
}

int main() {
    // Number of vertices
    int n;
    cin >> n;

    // Tree representation: adjacency list
    vector<vector<Edge>> tree(n);

    // Read edges
    for (int i = 0; i < n - 1; ++i) {
        int u, v, w;
        cin >> u >> v >> w; // u, v are vertices, w is weight
        u--; v--; // Convert to 0-based indexing
        tree[u].emplace_back(v, w);
        tree[v].emplace_back(u, w);
    }

    // Preprocess the tree to create the matrix
    vector<vector<int>> M = preprocessTree(tree, n);

    // Example queries
    int q;
    cin >> q; // Number of queries
    while (q--) {
        int x, y;
        cin >> x >> y; // Query for path x to y
        x--; y--; // Convert to 0-based indexing
        cout << "Maximum edge weight between " << x + 1 << " and " << y + 1
             << " is: " << maxEdgeOnPath(M, x, y) << endl;
    }

    return 0;
}
