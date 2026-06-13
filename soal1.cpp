#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<char> vertices(N);
    map<char, int> idx;
    for (int i = 0; i < N; i++)
    {
        cin >> vertices[i];
        idx[vertices[i]] = i;
    }

    vector<vector<int>> matrix(N, vector<int>(N, 0));

    int M;
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        char u, v;
        int w;
        cin >> u >> v >> w;
        if (idx.count(u) && idx.count(v))
        {
            matrix[idx[u]][idx[v]] = w;
        }
    }

    cout << "Adjacency Matrix:" << endl;

    cout << " ";
    for (int i = 0; i < N; i++)
        cout << " " << vertices[i];
    cout << endl;

    for (int i = 0; i < N; i++)
    {
        cout << vertices[i];
        for (int j = 0; j < N; j++)
            cout << " " << matrix[i][j];
        cout << endl;
    }

    return 0;
}