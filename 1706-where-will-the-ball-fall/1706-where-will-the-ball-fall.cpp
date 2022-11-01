class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
         int m = grid.size(), n = grid[0].size();
        vector<int> v;
        for (int i = 0; i < n; i++) {
            int cur_col = i;
            for (int cur_row = 0; cur_row < m; cur_row++) {
                        int next_col = cur_col + grid[cur_row][cur_col];
                if (next_col < 0 || next_col >= n || grid[cur_row][cur_col] ^ grid[cur_row][next_col]) {
                    cur_col = -1;
                    break;
                }
                cur_col = next_col;
            }
            v.push_back(cur_col);
        }
        return v;
    }
};