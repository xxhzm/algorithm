class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        int n = intervals.size();

        vector<int> starts;
        vector<int> ends;

        for(auto &i : intervals){
            starts.push_back(i[0]);
            ends.push_back(i[1]);
        }

        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());

        int i = 0, j = 0;
        int rooms = 0, ans = 0;

        while (i < n) {
            if (starts[i] < ends[j]) {
                rooms++;
                ans = max(ans, rooms);
                i++;
            } else {
                rooms--;
                j++;
            }
        }

        return ans;
    }
};