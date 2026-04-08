#include <iostream>
using namespace std;

struct Node{
    int x;
    int y;
};

int main(){
    int n;
    cin >> n;
    vector<vector<int>> dist(n + 1, vector<int>(n + 1));
    for(int i = 1;i <= n;i++){
        string s;
        cin >> s;
        for(int j = 1; j <= n; j++){
            dist[i][j] = s[j - 1] - '0';
        }
    }

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    vector<vector<int>> vis(n + 1, vector<int>(n + 1, false));
    vector<vector<int>> step(n + 1, vector<int>(n + 1, -1));

    queue<Node> q;
    q.push({x1, y1});
    vis[x1][y1] = true;
    step[x1][y1] = 0;

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};
    while (!q.empty()) {
        Node cur = q.front();
        q.pop();

        if (cur.x == x2 && cur.y == y2) {
            cout << step[cur.x][cur.y] << endl;
            return 0;
        }

        for (int i = 0;i < 4;i++) {
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];

            if (nx < 1 || ny < 1 || nx > n || ny > n) continue;
            if (vis[nx][ny] == true) continue;
            if (dist[nx][ny] == 1) continue;

            vis[nx][ny] = true;
            step[nx][ny] = step[cur.x][cur.y] + 1;
            q.push({nx, ny});
        }
    }


    return 0;
}