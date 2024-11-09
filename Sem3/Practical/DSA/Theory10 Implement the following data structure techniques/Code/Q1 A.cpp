/**
 * Write a program to generate the adjacency matrix.
 */
#include <iostream>
#include <vector>
using namespace std;

// Function to generate the adjacency matrix
void generateAdjacencyMatrix(int vertices, vector<vector<int>>& matrix) {
    int u, v;
    // For each edge, set the corresponding matrix entries to 1 (for undirected graph)
    for (int i = 0; i < vertices; i++) {
        for (int j = i + 1; j < vertices; j++) {
            cout << "Enter edge between vertex " << i + 1 << " and vertex " << j + 1 << " (1 for edge, 0 for no edge): ";
            cin >> matrix[i][j];
            matrix[j][i] = matrix[i][j]; // As it's undirected, set the symmetric entry too
        }
    }
}

// Function to display the adjacency matrix
void displayAdjacencyMatrix(const vector<vector<int>>& matrix) {
    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int vertices;
    
    // Get number of vertices
    cout << "Enter the number of vertices: ";
    cin >> vertices;

    // Create an adjacency matrix with all initial values set to 0
    vector<vector<int>> matrix(vertices, vector<int>(vertices, 0));

    // Generate adjacency matrix by asking user for edges
    generateAdjacencyMatrix(vertices, matrix);

    // Display the generated adjacency matrix
    displayAdjacencyMatrix(matrix);

    return 0;
}
