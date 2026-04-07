class Robot {
public:
    int w, h;
    int per;       // 外圈总长度
    int pos;       // 当前在外圈上的位置
    bool moved;    // 是否真正走过

    Robot(int width, int height) {
        w = width;
        h = height;
        per = 2 * (w + h) - 4;
        pos = 0;
        moved = false;
    }

    void step(int num) {
        if (num == 0) return;
        moved = true;
        pos = (pos + num) % per;
    }

    vector<int> getPos() {
        // 1) 底边：从 (0,0) 到 (w-1,0)
        if (pos <= w - 1) {
            return {pos, 0};
        }

        // 2) 右边：从 (w-1,1) 到 (w-1,h-1)
        if (pos <= w + h - 2) {
            return {w - 1, pos - (w - 1)};
        }

        // 3) 上边：从 (w-2,h-1) 到 (0,h-1)
        if (pos <= 2 * w + h - 3) {
            return {w - 1 - (pos - (w + h - 2)), h - 1};
        }

        // 4) 左边：从 (0,h-2) 到 (0,1)
        return {0, h - 1 - (pos - (2 * w + h - 3))};
    }

    string getDir() {
        // 初始状态题目要求是 East
        if (!moved) return "East";

        // 走了整圈回到原点，朝向应该是 South
        if (pos == 0) return "South";

        // 注意：拐角方向属于“走到这个点时的上一条边”
        if (pos <= w - 1) return "East";              // 包含右下角
        if (pos <= w + h - 2) return "North";         // 包含右上角
        if (pos <= 2 * w + h - 3) return "West";      // 包含左上角
        return "South";                               // 左边
    }
};