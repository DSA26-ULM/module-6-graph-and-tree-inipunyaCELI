#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<char> vertices(N);
    for (int i = 0; i < N; i++) cin >> vertices[i];

    vector<vector<int>> matrix(N, vector<int>(N));
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            cin >> matrix[i][j];

    cout << "Adjacency List:" << endl;
    for (int i = 0; i < N; i++) {
        cout << vertices[i] << " -> ";
        bool hasEdge = false;
        bool first = true;
        for (int j = 0; j < N; j++) {
            if (matrix[i][j] > 0) {
                if (!first) cout << ", ";
                cout << "(" << vertices[j] << "," << matrix[i][j] << ")";
                first = false;
                hasEdge = true;
            }
        }
        if (!hasEdge) cout << "-";
        cout << endl;
    }
    return 0;
}