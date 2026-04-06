class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        unordered_set<string> obs;
        for (auto &o : obstacles) {
            string key = to_string(o[0]) + "," + to_string(o[1]);
            obs.insert(key);
        }

        // 北 东 南 西
        vector<pair<int,int>> dirs = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        int dir = 0;  // 0北 1东 2南 3西
        int x = 0, y = 0;
        int ans = 0;

        for (int c : commands) {
            if (c == -1) {
                dir = (dir + 1) % 4;   // 右转
            } else if (c == -2) {
                dir = (dir + 3) % 4;   // 左转
            } else {
                for (int i = 0; i < c; i++) {
                    int nx = x + dirs[dir].first;
                    int ny = y + dirs[dir].second;
                    string key = to_string(nx) + "," + to_string(ny);
                    if (obs.count(key)) break;
                    x = nx;
                    y = ny;
                    ans = max(ans, x * x + y * y);
                }
            }
        }

        return ans;
    }
};