#include <bits/stdc++.h>

using namespace std;

struct Node {
    int x, y;
};

int main(){
    int n, m, sx, sy;
    cin >> n >> m >> sx >> sy;
    vector<vector<int>> dist(n + 1, vector<int>(m + 1, -1));
    // 马的 8 种走法
    int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};

    queue<Node> q;
    q.push({sx, sy});
    dist[sx][sy] = 0;

    while(!q.empty()){
        Node cur = q.front();
        q.pop();
        
        // cout << cur.x << cur.y;
        for(int i = 0;i < 8;i++){
            int nx = cur.x + dx[i];
            int ny = cur.y + dy[i];
            if(nx < 1 || ny < 1 || nx > n || ny > m) continue;
            if(dist[nx][ny] != -1) continue;

            dist[nx][ny] = dist[cur.x][cur.y] + 1;
            q.push({nx, ny});
        }
    }
    
    for(int i = 1;i <= n;i++){
        for(int j = 1;j <= m;j++){
            cout << dist[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}