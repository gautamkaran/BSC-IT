#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Function to find the vertex with the minimum distance value
int minDistance(const vector<int>& dist, const vector<bool>& sptSet, int vertices) {
    int min = INT_MAX, minIndex;
    for (int v = 0; v < vertices; v++) {
        if (!sptSet[v] && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }
    return minIndex;
}

// Dijkstra's algorithm to find the shortest path
void dijkstra(const vector<vector<int>>& graph, int src, int vertices) {
    vector<int> dist(vertices, INT_MAX);  // Initialize distances as infinite
    vector<bool> sptSet(vertices, false); // sptSet[i] will be true if vertex i is included in the shortest path tree
    dist[src] = 0;  // Distance from source to source is 0

    for (int count = 0; count < vertices - 1; count++) {
        // Pick the minimum distance vertex from the set of vertices not yet processed
        int u = minDistance(dist, sptSet, vertices);
        sptSet[u] = true; // Mark the picked vertex as processed

        // Update the distance value of the adjacent vertices of the picked vertex
        for (int v = 0; v < vertices; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the shortest distances
    cout << "Vertex\tDistance from Source\n";
    for (int i = 0; i < vertices; i++) {
        if (dist[i] == INT_MAX) {
            cout << i + 1 << "\tINF\n";  // No path to this vertex
        } else {
            cout << i + 1 << "\t" << dist[i] << endl;
        }
    }
}

int main() {
    int vertices, edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    // Create an adjacency matrix to represent the graph
    vector<vector<int>> graph(vertices, vector<int>(vertices, 0));

    cout << "Enter the number of edges: ";
    cin >> edges;

    cout << "Enter the edges (source, destination, weight):\n";
    for (int i = 0; i < edges; i++) {
        int u, v, weight;
        cout << "Edge " << i + 1 << ": ";
        cin >> u >> v >> weight;
        // Since the graph is undirected, we will add the edge in both directions
        graph[u - 1][v - 1] = weight;
        graph[v - 1][u - 1] = weight;
    }

    int source;
    cout << "Enter the source vertex (1 to " << vertices << "): ";
    cin >> source;

    // Call Dijkstra's algorithm to find the shortest path from the source vertex
    dijkstra(graph, source - 1, vertices);

    return 0;
}
